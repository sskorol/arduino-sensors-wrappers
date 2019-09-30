#include "Button.hpp"
#include "LED.hpp"

#define BAUD_RATE 115200
#define BUTTON_PIN D1
#define LED_PIN D2
#define DEBOUNCING_INTERVAL 5

Button button = Button(BUTTON_PIN, DEBOUNCING_INTERVAL);
LED led = LED(LED_PIN);

void setup() {
    Serial.begin(BAUD_RATE);
}

void loop() {
    if (button.isPressed()) {
        led.changeState(!led.isTurnedOn());
    }
}
