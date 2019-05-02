#ifndef CONTACT_SENSOR_HPP
#define CONTACT_SENSOR_HPP

#include "Sensor.hpp"
#include <Bounce2.h>

class ContactSensor : public Sensor {
  Bounce debouncer;
public:
  ContactSensor(uint8_t, uint16_t);
  int getState();
  bool isUpdated();
};

#endif
