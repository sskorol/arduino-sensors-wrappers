#include "IRReceiver.hpp"

IRReceiver::IRReceiver(uint8_t pin) : Sensor(pin) {
  ir = new IRrecv(pin, CAPTURE_BUFFER_SIZE, TIMEOUT, true);
  ir->enableIRIn();
}

std::tuple<uint64_t, String> IRReceiver::capture() {
  std::tuple<uint64_t, String> data;

  if (ir->decode(&results)) {
    decodedData = resultToSourceCode(&results);
    data = std::tuple<uint64_t, String>(results.value, decodedData);
    ir->resume();
  } else {
    data = std::tuple<uint64_t, String>(0ULL, "UNKNOWN");
  }
  
  return data;
}

String IRReceiver::getDecodedData() const {
  return decodedData;
}
