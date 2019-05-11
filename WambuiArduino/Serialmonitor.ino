int pinpot=A0;
int LED=10;
float ReadValue;
float WriteValue;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot, INPUT);
  pinMode(LED, OUTPUT);
  
  

}

void loop() {
  int ReadValue;
  int Voltage;

  ReadValue=analogRead(pinpot);
  WriteValue=(255./1023.)*ReadValue;//from the graph of digital values and analog
  Voltage=(5./1023.)*ReadValue;//from the graph of analog against voltage values
  
  
  analogWrite(LED,WriteValue);//the values will range from m0 to 1023 from the specified LED 
  delay(ReadValue);
  Serial.print("pinvalue");//reads values from the LED 
   Serial.print(" ");
  Serial.print(ReadValue);
  
  Serial.print("mapped value");//maps the range values from LED
  Serial.print(" ");
  Serial.print(ReadValue);//reads the values from the LED
  Serial.print(" ");
  Serial.print("Voltage value");
  Serial.print(" ");
  Serial.println(Voltage);
  
 analogWrite(LED,HIGH);
  delay(WriteValue);
 analogWrite(LED, LOW);
  delay(WriteValue); 
  
  //the blinking time control using the potentiometer
  //to vary the brightness and blinking time you tune the potentiometer
   
}
