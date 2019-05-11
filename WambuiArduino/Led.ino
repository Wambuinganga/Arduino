int redLED=3;
int blueLED=11;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLED, 102);
  delay(1000);
  analogWrite(redLED,0);
  delay(1000);


  

   }
