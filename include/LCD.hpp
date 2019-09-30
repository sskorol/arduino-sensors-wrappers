#ifndef LCD_HPP
#define LCD_HPP

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

class LCD {
    LiquidCrystal_I2C *lcd;
    int sdaPin, scaPin;

public:
    LCD(int sdaPin, int scaPin, uint8_t columns, uint8_t rows);

    LCD *init();

    LCD *print(const String &text);

    LCD *print(float value);

    LCD *moveCursorTo(uint8_t column, uint8_t row);

    LCD *clear();
};

#endif
