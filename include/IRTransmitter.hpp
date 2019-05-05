#ifndef IR_TRANSMITTER_H
#define IR_TRANSMITTER_H

#include <IRsend.h>
#include "IRDevice.hpp"
#include "Sensor.hpp"

class IRTransmitter : public Sensor {
  IRsend *ir;

 public:
  IRTransmitter(uint8_t);
  void send(IRDevice::Model, uint64_t);
};

#endif
