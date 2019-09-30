#include "ContactSensor.hpp"

ContactSensor::ContactSensor(uint8_t pin, uint16_t debouncingInterval) : Sensor(pin, INPUT_PULLUP) {
    debouncer = Bounce();
    debouncer.attach(pin);
    debouncer.interval(debouncingInterval);
}

int ContactSensor::getState() {
    return debouncer.read();
}

bool ContactSensor::isUpdated() {
    return debouncer.update();
}
