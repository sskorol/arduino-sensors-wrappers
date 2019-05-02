#include "Button.hpp"
#include "LED.hpp"

#define BAUD_RATE 115200
#define BUTTON_PIN D1
#define LED_PIN D2

Button button = Button(BUTTON_PIN);
LED led = LED(LED_PIN);

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  if (button.isUpdated() && button.getState() == LOW) {
    led.changeState(!led.isTurnedOn());
  }
}
