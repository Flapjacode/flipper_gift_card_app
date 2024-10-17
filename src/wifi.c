#include "wifi.h"  // Use quotes to include your local header
 // Keep this if you're using Flipper Zero's built-in Wi-Fi API

void connect_to_wifi(const char* ssid, const char* password) {
    wifi_init();
    wifi_connect(ssid, password);
}
