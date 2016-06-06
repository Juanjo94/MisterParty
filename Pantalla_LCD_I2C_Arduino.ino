#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd (0x27,16,2);
int x,y;
void setup() 
{
  lcd.begin();
  lcd.clear(); // initialize the lcd
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Iniciando...");
  delay(500);  
}

void loop() 
{
  for(y=0;y<2;y++)
  {
    for(x=0;x<16;x++)
    {
      lcd.clear();
      lcd.setCursor(x,y);
      lcd.print(x,HEX);
      delay(1000);
    }
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Final");
  delay(5000);

}
