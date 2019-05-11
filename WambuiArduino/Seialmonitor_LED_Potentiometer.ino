int pinpot=A0;
int Redled=10;
int Readvalue;
float Writevalue;
float voltage;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(Redled,OUTPUT);
  


}

void loop() {
  
  Readvalue=analogRead(pinpot);
  Writevalue=(255./1023.)*Readvalue;
  voltage=(5./1023.)*Readvalue;
  analogWrite(Redled,Writevalue);
  Serial.print("tpinvalue ");
  Serial.print(Readvalue);
  Serial.print(" ");
  Serial.print("mapped values");
  Serial.print(" ");
  Serial.print(Writevalue);
  Serial.print("");
  Serial.print("Write value");
  Serial.print("");
  Serial.println(voltage);
  delay(1000);
  


}
