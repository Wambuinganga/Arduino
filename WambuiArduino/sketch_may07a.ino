#include <LiquidCrystal.h>
 LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

 
int Trig=3;
int Echo=4;
float Duration;
float Distance;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Trig, LOW);
  delayMicroseconds(5);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  Duration=pulseIn(Echo, HIGH);
  Distance=(Duration/2)*0.0343;
  lcd.setCursor(0,0);
  lcd.print("Distance= ");
  lcd.print(analogRead(Distance));
  delay(500);





}
