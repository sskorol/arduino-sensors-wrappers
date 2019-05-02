#ifndef LAMP_HPP
#define LAMP_HPP

#include <RCSwitch.h>
#include "Sensor.hpp"

class Lamp : public Sensor {
  RCSwitch transmitter;
  bool _isTurnedOn;

 public:
  Lamp(uint8_t);
  bool isTurnedOn();
  void turnOn(unsigned long, unsigned int);
  void turnOff(unsigned long, unsigned int);
  void setPowerState(bool);
  void sendCode(unsigned long, unsigned int);
  void switchProtocol(int);
};

#endif
