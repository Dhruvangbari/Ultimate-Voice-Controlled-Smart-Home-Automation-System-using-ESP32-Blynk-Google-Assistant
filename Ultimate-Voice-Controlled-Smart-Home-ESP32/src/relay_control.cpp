#include <Arduino.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "relay_control.h"

static const unsigned char RELAYS[4] = {RELAY1, RELAY2, RELAY3, RELAY4};
static int relayState[4] = {0,0,0,0};

void initRelays() {
  for (int i=0;i<4;i++){
    pinMode(RELAYS[i], OUTPUT);
    digitalWrite(RELAYS[i], RELAY_ACTIVE_HIGH ? LOW : HIGH);
  }
}

void setRelay(unsigned char index, int state){
  if(index > 3) return;
  relayState[index] = state ? 1 : 0;
  int pinValue = relayState[index] ? (RELAY_ACTIVE_HIGH ? HIGH : LOW)
                                   : (RELAY_ACTIVE_HIGH ? LOW : HIGH);
  digitalWrite(RELAYS[index], pinValue);
}

void syncRelayStates(){
  Blynk.virtualWrite(V0, relayState[0]);
  Blynk.virtualWrite(V1, relayState[1]);
  Blynk.virtualWrite(V2, relayState[2]);
  Blynk.virtualWrite(V3, relayState[3]);
}
