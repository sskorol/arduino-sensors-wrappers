#ifndef SENSOR_HPP
#define SENSOR_HPP

#include "Arduino.h"

class Sensor {
    uint8_t pin;

public:
    Sensor(uint8_t pin, uint8_t mode);

    explicit Sensor(uint8_t pin);

protected:
    uint8_t getPin() const;
};

#endif
