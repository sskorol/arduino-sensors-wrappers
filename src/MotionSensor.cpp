#include "MotionSensor.hpp"

MotionSensor::MotionSensor(uint8_t pin) : Sensor(pin, INPUT) {}

bool MotionSensor::isMovementDetected() {
    return digitalRead(getPin()) == HIGH;
}
