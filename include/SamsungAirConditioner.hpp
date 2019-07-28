#ifndef SAMSUNG_AIR_CONDITIONER_HPP
#define SAMSUNG_AIR_CONDITIONER_HPP

#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ir_Samsung.h>

class SamsungAirConditioner {
  IRSamsungAc *ac; 
public:
  SamsungAirConditioner(uint8_t pin, bool inverted = false);
  SamsungAirConditioner* turnOn();
  SamsungAirConditioner* turnOff();
  bool isTurnedOn();
  SamsungAirConditioner* adjustTemperature(uint8_t);
  SamsungAirConditioner* adjustTemperature(uint8_t, bool);
  uint8_t getTemperature();
  SamsungAirConditioner* adjustFanSpeed(uint8_t);
  SamsungAirConditioner* adjustFanSpeed(uint8_t, bool);
  uint8_t getFanSpeed();
  SamsungAirConditioner* adjustWorkMode(uint8_t);
  SamsungAirConditioner* adjustWorkMode(uint8_t, bool);
  uint8_t getWorkMode();
  SamsungAirConditioner* adjustSwingMode(bool);
  SamsungAirConditioner* adjustSwingMode(bool, bool);
  bool isSwingModeOn();
  SamsungAirConditioner* sendCommands();
  SamsungAirConditioner* printState();
};

#endif
