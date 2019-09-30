#ifndef RF_RECEIVER_HPP
#define RF_RECEIVER_HPP

#include "Sensor.hpp"
#include "RCSwitch.h"

class RFReceiver : public Sensor {
    RCSwitch receiver;
public:
    explicit RFReceiver(uint8_t);

    unsigned long listen();

    void enable();

    void disable();
};

#endif
