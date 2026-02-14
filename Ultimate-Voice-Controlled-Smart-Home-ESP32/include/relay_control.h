#ifndef RELAY_CONTROL_H
#define RELAY_CONTROL_H

void initRelays();
void setRelay(unsigned char index, int state);
void syncRelayStates();

#endif
