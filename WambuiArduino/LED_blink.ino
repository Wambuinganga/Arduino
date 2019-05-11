int redled=4;
int greenled=11;
int blinkred;
int blinkgreen;
int redledon;
int redledoff;
int greenledon;
int greenledoff;



void setup() {
  // put your setup code here, to run once:
  {
    Serial.begin(9600);
    pinMode(redled, OUTPUT);
    pinMode(greenled, OUTPUT);
    Serial.println("THIS IS MY BLINKING PROGRAME");
    Serial.println(" ");

    Serial.println("How many red blinks?");
    Serial.println(" ");
    while(Serial.available()==0){};
    blinkred=Serial.parseInt();
    
    Serial.println("How long does redled go on?");
    Serial.println(" ");
    while(Serial.available()==0){};
    redledon=Serial.parseInt();

    Serial.println("How long does redled go off?");
    Serial.println(" ");
    while(Serial.available()==0){};
    redledoff=Serial.parseInt();
    
    
    Serial.println("How many green blinks?");
    Serial.println(" ");
    while(Serial.available()==0){};
    blinkgreen=Serial.parseInt();
    
    Serial.println("How long does greenled go on?");
    Serial.println(" ");
    while(Serial.available()==0){};
    greenledon=Serial.parseInt();

    Serial.println("How long does greenled go off?");
    Serial.println(" ");
    while(Serial.available()==0){};
    greenledoff=Serial.parseInt();
    }
    


}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j=1;j<=blinkred;j=j+1)
  {
  Serial.print("greenled blinking # ");
  Serial.println(j);
  digitalWrite(redled,HIGH);
  delay(redledon);
  digitalWrite(redled,LOW);
  delay(redledoff);
  }
  Serial.print(" ");

  for(int j=1;j<=blinkgreen;j=j+1)
  {
  Serial.print("greenled blinking # ");
  Serial.println(j);
  digitalWrite(greenled,HIGH);
  delay(greenledon);
  digitalWrite(greenled,LOW);
  delay(greenledoff);
  }

  
  

}
