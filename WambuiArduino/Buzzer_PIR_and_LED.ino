int PIR =12 ;
int led=4;
int buzzer=6;

void setup() {
  // put your setup code here, to run once:
pinMode(PIR, INPUT);
pinMode(led,OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(PIR)==HIGH){
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);
  delay(1000);
  Serial.println("ALARM! ALARM!");
}
else{
  digitalWrite(led,LOW);
  digitalWrite(buzzer, LOW);
  Serial.println("Scanning......");
  delay(1000);
}
}
