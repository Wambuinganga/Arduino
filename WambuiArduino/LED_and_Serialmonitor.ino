int RED=7;
int GREEN=5;
int pir =8;
int motion;
void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(pir,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
   for(int r=2; r<=RED;r=r+2)
  motion=digitalRead(pir);
  if (motion==HIGH){
  
  digitalWrite(RED,HIGH);
  delay(500);
  digitalWrite(RED,LOW);
  delay(500);
  
  }

 else{
  for(int g=1; g<=GREEN;g=g+1)
   digitalWrite(GREEN,HIGH);
   delay(100);
   digitalWrite(GREEN,LOW);
     delay(100);
  
  
  
 }

}
