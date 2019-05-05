#include "Lamp.hpp"

Lamp::Lamp(uint8_t pin) : RFTransmitter(pin) {
  _isTurnedOn = false;
  brightnessLevel = 100;
}

bool Lamp::isTurnedOn() {
  return _isTurnedOn;
}

void Lamp::turnOn(unsigned long code, unsigned int length) {
  RFTransmitter::sendCode(code, length);
  setPowerState(true);
}

void Lamp::turnOff(unsigned long code, unsigned int length) {
  RFTransmitter::sendCode(code, length);
  setPowerState(false);
}

void Lamp::setPowerState(bool isTurnedOn) {
  _isTurnedOn = isTurnedOn;
}

void Lamp::setBrightness(int level, unsigned long code, unsigned int length) {
  RFTransmitter::sendCode(code, length);
  brightnessLevel = level;
}

int Lamp::getBrightness() {
  return brightnessLevel;
}
