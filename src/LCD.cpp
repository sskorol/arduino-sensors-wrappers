#include "LCD.hpp"

/*
  Typical config
  #define LCD_SDA_PIN 14
  #define LCD_SCL_PIN 12
  #define LCD_COLUMNS 16
  #define LCD_ROWS 2
*/
LCD::LCD(int _sdaPin, int _scaPin, uint8_t columns, uint8_t rows) : sdaPin(_sdaPin), scaPin(_scaPin) {
    lcd = new LiquidCrystal_I2C(0x27, columns, rows);
}

LCD *LCD::init() {
    Wire.begin(sdaPin, scaPin);
    lcd->init();
    lcd->backlight();
    lcd->print("Ready");
    return this;
}

LCD *LCD::print(float value) {
    return print(String(value));
}

LCD *LCD::print(const String& text) {
    lcd->print(text);
    return this;
}

LCD *LCD::clear() {
    lcd->clear();
    return this;
}

LCD *LCD::moveCursorTo(uint8_t column, uint8_t row) {
    lcd->setCursor(column, row);
    return this;
}
