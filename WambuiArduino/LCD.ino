+# include <LiquidCrystal.h>lcd

 LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
 int pinpot = A0;
 
 void.setup(){
  lcd.begin(16,2);
  lcd.clear();
  pinMode(pinpot, INPUT);
}
void loop(){
  lcd.SetCursor(0,0);
  lcd.print("Value 1= ");
  lcd.print(analogRead(pinpopt));
}

