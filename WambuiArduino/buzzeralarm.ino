int PIR;
int Led;
int buzzer;
void setup() {
  // put your setup code here, to run once:
pinMode(PIR, INPUT);
pinMode(Led, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(PIR)==HIGH){
    digitalWrite(Led, HIGH);
    digitalWrite(buzzer,HIGH);
    delay(1000);
   digitalWrite(Led, LOW);
   digitalWrite(buzzer,LOW);
   delay(1000);
   Serial.println("ALARM! ALARM!");
}

else{
  digitalWrite(Led, LOW);
  digitalWrite(buzzer, LOW);
  Serial.println("Scanning....");
  delay(1000);
}
}
