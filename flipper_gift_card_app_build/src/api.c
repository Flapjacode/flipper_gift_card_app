#include "api.h"
#include <http.h>

void activate_gift_card(const char* barcode) {
    char url[256];
    snprintf(url, sizeof(url), "https://yourstore.com/api/activate?code=%s", barcode);
    http_get(url);
}
