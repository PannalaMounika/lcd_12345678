#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(4, 0); 
  lcd.print("MOUNIKA"); 
  lcd.setCursor(4, 1); 
  lcd.print("PANNALA");
  delay(2000);
  lcd.clear();
}
  
void loop() 
{
  lcd.setCursor(4, 0); 
  lcd.print("THIS IS "); 
  lcd.setCursor(4, 1); 
  lcd.print("MOUNIKA");
}

  
