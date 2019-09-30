#ifndef LIGHT_SENSOR_HPP
#define LIGHT_SENSOR_HPP

#include <BH1750FVI.h>
#include <Wire.h>

class LightSensor {
    static const unsigned int CONNECTION_ATTEMPT_DELAY;
    static const unsigned int CONNECTION_TIMEOUT;
    BH1750FVI *lightSensor;
    bool isConnected;

public:
    LightSensor(uint8_t, uint8_t);

    float measureLightLevel();

    bool isAvailable();
};

#endif
