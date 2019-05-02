#include "Button.hpp"

Button::Button(uint8_t pin, uint16_t debouncingInterval) : ContactSensor(pin, debouncingInterval) {}

bool Button::isPressed() {
  return ContactSensor::isUpdated() && ContactSensor::getState() == LOW;
}
