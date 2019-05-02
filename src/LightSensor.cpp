#include "LightSensor.hpp"

const unsigned int LightSensor::CONNECTION_ATTEMPT_DELAY = 500;
const unsigned int LightSensor::CONNECTION_TIMEOUT = 5000;

LightSensor::LightSensor(uint8_t sdaPin, uint8_t sclPin) {
  Serial.print("\nConnecting to BH1750FVI");
  
  lightSensor = new BH1750FVI(BH1750_DEFAULT_I2CADDR, BH1750_CONTINUOUS_HIGH_RES_MODE_2, BH1750_SENSITIVITY_DEFAULT, BH1750_ACCURACY_DEFAULT);

  unsigned int elapsedTime = 0;
  while (lightSensor->begin(sdaPin, sclPin) != true && elapsedTime < CONNECTION_TIMEOUT) {
    delay(CONNECTION_ATTEMPT_DELAY);
    elapsedTime += CONNECTION_ATTEMPT_DELAY;
    Serial.print(".");
  }

  isConnected = elapsedTime < CONNECTION_TIMEOUT;

  if (isConnected) {
    Serial.println("\nBH1750FVI connected");
  } else {
    Serial.println("\nUnable to connect to BH1750FVI");
  }
}

float LightSensor::measureLightLevel() {
  return isConnected ? lightSensor->readLightLevel() : 0.0f;
}

bool LightSensor::isAvailable() {
  return isConnected;
}
