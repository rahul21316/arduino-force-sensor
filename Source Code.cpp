#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float freading;

void setup()
{
  pinMode(A0, INPUT);
  lcd.begin(16,2);
}

void loop()
{
  freading = analogRead(0);
  lcd.setCursor(0,0);
  
  if(freading < 10)
  {
    lcd.print("no touch");
    delay(2000);
    lcd.clear();
  }
  else if(freading > 10 && freading < 200)
  {
    lcd.print("slight touch");
    delay(2000);
    lcd.clear();
  }
  else if(freading > 200 && freading < 500)
  {
    lcd.print("weak touch");
    delay(2000);
    lcd.clear();
  }
  else if(freading > 500 && freading < 800)
  {
    lcd.print("moderate touch");
    delay(2000);
    lcd.clear();
  }
  else if(freading > 800)
  {
    lcd.print("hard touch");
    delay(2000);
    lcd.clear();
  }
}
