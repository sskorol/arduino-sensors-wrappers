#ifndef LAMP_HPP
#define LAMP_HPP

#include "RFTransmitter.hpp"

class Lamp : public RFTransmitter {
    bool _isTurnedOn;
    int brightnessLevel;

public:
    explicit Lamp(uint8_t);

    bool isTurnedOn();

    void turnOn(unsigned long, unsigned int);

    void turnOff(unsigned long, unsigned int);

    void setPowerState(bool);

    int getBrightness();

    void setBrightness(int, unsigned long, unsigned int);
};

#endif
