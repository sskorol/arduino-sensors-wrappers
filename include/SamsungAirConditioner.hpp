#ifndef SAMSUNG_AIR_CONDITIONER_HPP
#define SAMSUNG_AIR_CONDITIONER_HPP

#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ir_Samsung.h>

class SamsungAirConditioner {
  IRSamsungAc *ac; 
public:
  SamsungAirConditioner(uint8_t);
  SamsungAirConditioner* turnOn();
  SamsungAirConditioner* turnOff();
  SamsungAirConditioner* adjustTemperature(uint8_t);
  SamsungAirConditioner* adjustTemperature(uint8_t, bool);
  SamsungAirConditioner* adjustFanSpeed(uint8_t);
  SamsungAirConditioner* adjustFanSpeed(uint8_t, bool);
  SamsungAirConditioner* adjustWorkMode(uint8_t);
  SamsungAirConditioner* adjustWorkMode(uint8_t, bool);
  SamsungAirConditioner* adjustSwingMode(bool);
  SamsungAirConditioner* adjustSwingMode(bool, bool);
  SamsungAirConditioner* sendCommands();
  SamsungAirConditioner* printState();
};

#endif
