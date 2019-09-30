#ifndef MOTION_SENSOR_HPP
#define MOTION_SENSOR_HPP

#include "Sensor.hpp"

class MotionSensor : public Sensor {
public:
    explicit MotionSensor(uint8_t);

    bool isMovementDetected();
};

#endif
