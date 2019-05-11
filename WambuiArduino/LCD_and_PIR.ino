# include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
int trig=3;
int echo=4;
float distance;
float duration;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);  

}

void loop() {

 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 
 distance=pulseIn(echo,HIGH);
 distance=(duration/2)*0.0343;
 lcd.setCursor(0,0);
 lcd.print("distance= ");
 lcd.print(analogRead(distance));
 
  delay(1000);
  
  
  

}
