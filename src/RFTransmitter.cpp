#include "RFTransmitter.hpp"

RFTransmitter::RFTransmitter(uint8_t pin) : Sensor(pin) {
  transmitter = RCSwitch();
  transmitter.enableTransmit(getPin());
}

void RFTransmitter::sendCode(unsigned long code, unsigned int length) {
  transmitter.send(code, length);
}

void RFTransmitter::switchProtocol(int number) {
  transmitter.setProtocol(number);
}
