#ifndef LIGHT_SENSOR_HPP
#define LIGHT_SENSOR_HPP

#include <BH1750FVI.h>
#include <Wire.h>

class LightSensor {
  static const unsigned int CONNECTION_ATTEMPT_DELAY;
  BH1750FVI *lightSensor;

 public:
  LightSensor(uint8_t, uint8_t);
  float measureLightLevel();
};

#endif
