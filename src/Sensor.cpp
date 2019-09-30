#include "Sensor.hpp"

Sensor::Sensor(uint8_t _pin, uint8_t mode) : pin(_pin) {
    pinMode(pin, mode);
}

Sensor::Sensor(uint8_t _pin) : pin(_pin) {}

uint8_t Sensor::getPin() const {
    return pin;
}
