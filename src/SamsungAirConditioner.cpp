#include "SamsungAirConditioner.hpp"

SamsungAirConditioner::SamsungAirConditioner(uint8_t pin) {
  ac = new IRSamsungAc(pin);
  ac->begin();
}

SamsungAirConditioner* SamsungAirConditioner::turnOn() {
  ac->on();
  ac->sendOn();
  return this;
}

SamsungAirConditioner* SamsungAirConditioner::turnOff() {
  ac->off();
  ac->sendOff();
  return this;
}

bool SamsungAirConditioner::isTurnedOn() {
  return ac->getPower();
}

SamsungAirConditioner* SamsungAirConditioner::adjustTemperature(uint8_t value) {
  return adjustTemperature(value, false);
}

SamsungAirConditioner* SamsungAirConditioner::adjustTemperature(uint8_t value, bool shouldSend) {
  ac->setTemp(value);
  
  if (shouldSend) {
    sendCommands();
  }

  return this;
}

uint8_t SamsungAirConditioner::getTemperature() {
  return ac->getTemp();
}

SamsungAirConditioner* SamsungAirConditioner::adjustFanSpeed(uint8_t value) {
  return adjustFanSpeed(value, false);
}

SamsungAirConditioner* SamsungAirConditioner::adjustFanSpeed(uint8_t value, bool shouldSend) {
  ac->setFan(value);
  
  if (shouldSend) {
    sendCommands();
  }

  return this;
}

uint8_t SamsungAirConditioner::getFanSpeed() {
  return ac->getFan();
}

SamsungAirConditioner* SamsungAirConditioner::adjustWorkMode(uint8_t value) {
  return adjustWorkMode(value, false);
}

SamsungAirConditioner* SamsungAirConditioner::adjustWorkMode(uint8_t value, bool shouldSend) {
  ac->setMode(value);
  
  if (shouldSend) {
    sendCommands();
  }

  return this;
}

uint8_t SamsungAirConditioner::getWorkMode() {
  return ac->getMode();
}

SamsungAirConditioner* SamsungAirConditioner::adjustSwingMode(bool state) {
  return adjustSwingMode(state, false);
}

SamsungAirConditioner* SamsungAirConditioner::adjustSwingMode(bool state, bool shouldSend) {
  ac->setSwing(state);
  
  if (shouldSend) {
    sendCommands();
  }

  return this;
}

bool SamsungAirConditioner::isSwingModeOn() {
  return ac->getSwing();
}

SamsungAirConditioner* SamsungAirConditioner::sendCommands() {
  ac->send();
  return this;
}

SamsungAirConditioner* SamsungAirConditioner::printState() {
  Serial.println("Samsung A/C remote is in the following state:");
  Serial.printf("  %s\n", ac->toString().c_str());
  return this;
}
