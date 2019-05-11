int pirPIN=8;
int servoPIN=5;
int movement;

void setup() {
  Serial.begin(9600);
  pinMode(pirPIN,INPUT);
  pinMode(servoPIN,OUTPUT);
  
}

void loop() {
  for (int j=1;j<=pirPIN;j=j+1)
  movement=digitalRead(pirPIN);
    if (movement==HIGH){
  
  digitalWrite(pirPIN,HIGH);
  delay(500);
  digitalWrite(pirPIN,LOW);
  delay(500);
  

}
 else{
  for(int g=3; g<=servoPIN;g=g+3)
   digitalWrite(servoPIN,HIGH);
   delay(100);
   digitalWrite(servoPIN,LOW);
   delay(100);
  
  
  
 }
 Serial.print("movement");
 Serial.print("");
 Serial.println(movement);
 
}
