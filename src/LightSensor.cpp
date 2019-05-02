#include "LightSensor.hpp"

const unsigned int LightSensor::CONNECTION_ATTEMPT_DELAY = 500;

LightSensor::LightSensor(uint8_t sdaPin, uint8_t sclPin) {
  lightSensor = new BH1750FVI(BH1750_DEFAULT_I2CADDR, BH1750_CONTINUOUS_HIGH_RES_MODE_2, BH1750_SENSITIVITY_DEFAULT, BH1750_ACCURACY_DEFAULT);

  while (lightSensor->begin(sdaPin, sclPin) != true) {
    delay(CONNECTION_ATTEMPT_DELAY);
    Serial.print(".");
  }

  Serial.println("\nBH1750FVI connected");
}

float LightSensor::measureLightLevel() {
  return lightSensor->readLightLevel();
}
