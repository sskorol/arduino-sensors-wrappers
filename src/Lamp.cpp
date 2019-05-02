#include "Lamp.hpp"

Lamp::Lamp(uint8_t pin) : Sensor(pin) {
  _isTurnedOn = false;
  transmitter = RCSwitch();
  transmitter.enableTransmit(getPin());
}

bool Lamp::isTurnedOn() {
  return _isTurnedOn;
}

void Lamp::turnOn(unsigned long code, unsigned int length) {
  sendCode(code, length);
  setPowerState(true);
}

void Lamp::turnOff(unsigned long code, unsigned int length) {
  sendCode(code, length);
  setPowerState(false);
}

void Lamp::setPowerState(bool isTurnedOn) {
  _isTurnedOn = isTurnedOn;
}

void Lamp::sendCode(unsigned long code, unsigned int length) {
  transmitter.send(code, length);
}

void Lamp::switchProtocol(int number) {
  transmitter.setProtocol(number);
}
