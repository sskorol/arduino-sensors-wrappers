#include "Button.hpp"

Button::Button(uint8_t pin, uint16_t debouncingInterval) : ContactSensor(pin, debouncingInterval) {}
