# include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,8,9,10,11,12);
int pinpot=A0;
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(pinpot,INPUT);
  
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("value 1= ");
  lcd.print(analogRead(pinpot));
  
 

}
