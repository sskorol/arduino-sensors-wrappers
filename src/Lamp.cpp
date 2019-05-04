#include "Lamp.hpp"

Lamp::Lamp(uint8_t pin) : RFTransmitter(pin) {
  _isTurnedOn = false;
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
