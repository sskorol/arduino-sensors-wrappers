#include "RFTransmitter.hpp"

RFTransmitter::RFTransmitter(uint8_t pin) : Sensor(pin) {
  transmitter = RCSwitch();
  enable();
}

void RFTransmitter::sendCode(unsigned long code, unsigned int length) {
  transmitter.send(code, length);
}

void RFTransmitter::switchProtocol(int number) {
  transmitter.setProtocol(number);
}

void RFTransmitter::enable() {
  transmitter.enableTransmit(getPin());
}

void RFTransmitter::disable() {
  transmitter.disableTransmit();
}
