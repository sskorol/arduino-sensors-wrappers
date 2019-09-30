#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "ContactSensor.hpp"

class Button : public ContactSensor {
public:
    Button(uint8_t, uint16_t);

    bool isPressed();
};

#endif
