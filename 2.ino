#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);        // select the pins used on the LCD panel

unsigned long tepTimer ;

void setup(){
    lcd.begin(16, 2);                       // start the library
}

void loop(){
    lcd.setCursor(0, 0);                   
    lcd.print("Hello Adi :)");
}