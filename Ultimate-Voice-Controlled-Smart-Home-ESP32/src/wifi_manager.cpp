#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "wifi_manager.h"

unsigned long lastReconnectAttempt = 0;

void connectWiFiAndBlynk(){
  Blynk.begin(auth, ssid, pass);
}

void maintainConnection(){
  if (WiFi.status() != WL_CONNECTED) {
    unsigned long now = millis();
    if (now - lastReconnectAttempt > 5000) {
      lastReconnectAttempt = now;
      WiFi.reconnect();
    }
  }
}
