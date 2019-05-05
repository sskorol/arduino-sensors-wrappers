#ifndef IR_RECEIVER_H
#define IR_RECEIVER_H

#include <IRrecv.h>
#include <IRutils.h>
#include <tuple>
#include "Sensor.hpp"

#define CAPTURE_BUFFER_SIZE 1024
#define TIMEOUT 15U

class IRReceiver : public Sensor {
  IRrecv *ir;
  decode_results results;
  String decodedData;

 public:
  IRReceiver(uint8_t);
  std::tuple<uint64_t, String> capture();
  String getDecodedData() const;
};

#endif
