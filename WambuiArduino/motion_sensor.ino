int Trig=9;
int Echo=11;
float Duration;
float Distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Trig, OUTPUT);                                                                                                                         
pinMode(Echo, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 { 
digitalWrite(Trig, LOW);
delayMicroseconds(5);
digitalWrite(Trig, HIGH);
delayMicroseconds(10);
digitalWrite(Trig, LOW);

Duration=pulseIn(Echo, HIGH);
Distance=(Duration/2)*0.0343;


Serial.println("Distance Value");
Serial.println(Distance);
delay(500);
 }


  }


