#include <Arduino.h>
#include <WiFiManager.h>

WiFiManager wifiManager;
void setupWifiManager(const char* hostname, const char* password) {
    wifiManager.setHostname(hostname);
    wifiManager.setClass("invert");

    std::vector<const char *> menu = {"wifi","info","sep","restart"};
    wifiManager.setMenu(menu);
    wifiManager.setCaptivePortalEnable(false);

    wifiManager.autoConnect(hostname, password);
}

void setup() {
    setupWifiManager("key.board", "semisecurepwd");
}

void loop() {
// write your code here
}
