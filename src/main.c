#include <stdbool.h>
#include <string.h>
#include <unistd.h>  // For sleep function
#include "wifi.h"
#include "barcode.h"
#include "api.h"

int main() {
    connect_to_wifi("YourSSID", "YourPassword");
    setup_barcode_scanner();
    
    while (true) {
        char* barcode = read_barcode();
        if (strlen(barcode) > 0) {
            activate_gift_card(barcode);
        }
        sleep(1); // Use seconds for sleep
    }
}
