#ifndef LED_HPP
#define LED_HPP

#include "Sensor.hpp"

class LED : public Sensor {
  int state;

 public:
  LED(uint8_t);
  void changeState(uint8_t);
  void turnOn();
  void turnOff();
  boolean isTurnedOn();
};

#endif
