#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
#include <Servo.h>

Servo servopin;
int PIR = 3;
int ReadValue;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  servopin.attach(5);
  pinMode(PIR, INPUT);
}

void loop() {

  ReadValue = digitalRead(PIR);
  if (ReadValue == HIGH) {
    lcd.setCursor(0,0);
    lcd.print("Positive");
    servopin.write (90);
    delay (500);
    }

   else{
    lcd.setCursor (0,0);
    lcd.print ("Negative");
    servopin.write (0);
    
    delay (500);
   }
}
