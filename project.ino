#include <Servo.h>

#include<Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,4);

Servo myservo;  
int pos = 20; 
 
int trigPin1=2;
int echoPin1=3;

int trigPin2=4;
int echoPin2=5;

int trigPin3=6;
int echoPin3=7;

const int trigPin4 = 8;
const int echoPin4 = 9;
//const int led = 13;
long duration;
float distance;

void setup() 
{
// Serial.begin (9600);
 pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
 pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
 pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  myservo.attach(11);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT); 
//  pinMode(led, OUTPUT);
  myservo.write(pos);
                      // initialize the lcd
 lcd.init();
 lcd.backlight();
 
 lcd.setCursor(0,0);
 lcd.print("Plastic: ");
// lcd.setCursor(0,0);
 lcd.setCursor(0,1);
 lcd.print("Organic: ");
// lcd.setCursor(10,1);
// lcd.setCursor(0,2);
// lcd.print("Other: ");
// lcd.setCursor(10,2);

 delay(1000);
}

void loop() 
{
  //Serial.begin(9600);
  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);
  duration = pulseIn(echoPin4, HIGH);
  distance = 0.034*(duration/2);
  
//  lcd.setCursor(0,3);
//  lcd.print("person sensor:");
//  lcd.println(distance);
  if (distance < 27)
  {
//    digitalWrite(led,HIGH);
    myservo.write(pos+90);
    delay(1000);
  }
  else 
  {
//    digitalWrite(led,LOW);
      myservo.write(pos);
  }
  delay(300);

   long duration1, distance1;
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1/2) * 0.034;
  
  if (distance1 < 27){
    Serial.println("Out of range");
  }
//  else {
//   Serial.print ( "Plastic Waste:  ");
//  Serial.print ( distance1);
//   Serial.println("cm");
//  }
  delay(2000);
long duration2, distance2;
  digitalWrite(trigPin2, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2/2) / 29.1;

   if (distance2 >= 500 || distance2 <= 0){
    Serial.println("Out of range");
  }
//  else {
//    Serial.print("Organic Waste:  ");
//    Serial.print(distance2);
//    Serial.println("cm");
//  }
  delay(2000);
  long duration3, distance3;
  digitalWrite(trigPin3, LOW);  
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3/2) / 29.1;

   if (distance3 >= 500 || distance3 <= 0){
    Serial.println("Out of range");
  }
//  else {
//    Serial.print("AnyOther Waste:  ");
//    Serial.print(distance3);
//    Serial.println("cm");
//  }
  delay(2000);
}


