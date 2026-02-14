#define BLYNK_PRINT Serial
#include <Arduino.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "relay_control.h"
#include "voice_bridge.h"
#include "wifi_manager.h"

BLYNK_WRITE(V0){ handleVirtualRelay(0, param.asInt()); }
BLYNK_WRITE(V1){ handleVirtualRelay(1, param.asInt()); }
BLYNK_WRITE(V2){ handleVirtualRelay(2, param.asInt()); }
BLYNK_WRITE(V3){ handleVirtualRelay(3, param.asInt()); }

void setup() {
  Serial.begin(9600);
  initRelays();
  connectWiFiAndBlynk();
  syncRelayStates();
}

void loop() {
  Blynk.run();
  maintainConnection();
}
