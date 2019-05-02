#include "RFReceiver.hpp"

RFReceiver::RFReceiver(uint8_t pin) : Sensor(pin) {
  receiver = RCSwitch();
  receiver.enableReceive(getPin());
}

unsigned long RFReceiver::listen() {
  unsigned long code = 0;

  if (receiver.available()) {
    Serial.print("Received ");
    code = receiver.getReceivedValue();
    Serial.print(code);
    Serial.print(" / ");
    Serial.print(receiver.getReceivedBitlength());
    Serial.print("bit ");
    Serial.print("Protocol: ");
    Serial.println(receiver.getReceivedProtocol());
    receiver.resetAvailable();
  }

  return code;
}
