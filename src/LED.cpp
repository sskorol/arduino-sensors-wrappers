#include "LED.hpp"

LED::LED(uint8_t pin) : Sensor(pin, OUTPUT) {
    state = LOW;
}

void LED::changeState(uint8_t _state) {
    state = _state;
    digitalWrite(getPin(), state);
}

void LED::turnOn() {
    changeState(HIGH);
}

void LED::turnOff() {
    changeState(LOW);
}

boolean LED::isTurnedOn() {
    return state == HIGH;
}
