#ifndef RF_TRANSMITTER_HPP
#define RF_TRANSMITTER_HPP

#include <RCSwitch.h>
#include "Sensor.hpp"

class RFTransmitter : public Sensor {
  RCSwitch transmitter;

 public:
  RFTransmitter(uint8_t);
  void sendCode(unsigned long, unsigned int);
  void switchProtocol(int);
};

#endif
