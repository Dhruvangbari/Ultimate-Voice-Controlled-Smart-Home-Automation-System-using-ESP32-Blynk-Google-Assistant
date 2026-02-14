#include <Arduino.h>
#include "voice_bridge.h"
#include "relay_control.h"

void handleVirtualRelay(unsigned char index, int state){
  setRelay(index, state);
}
