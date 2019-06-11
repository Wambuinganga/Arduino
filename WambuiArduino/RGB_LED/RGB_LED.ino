 int redpin = 6;
 int greenpin = 10;
 int bluepin = 11;
 int brightness = 1255;
 String colorChoice;

void setup() {

Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(bluepin,OUTPUT);


}

void loop() {
Serial.println("what color would you like the LED(red,green, blue, orange, yellow, purple");
while (Serial.available ()==0) {}
colorChoice = Serial.readString ();

if (colorChoice=="red")  {

 analogWrite (redpin,brightness);
 analogWrite (greenpin,0);
 analogWrite (bluepin,0);

}

 if (colorChoice=="blue")  {

 analogWrite (redpin,0);
 analogWrite (greenpin,0);
 analogWrite (bluepin,brightness);

}

 if (colorChoice=="green")  {

 analogWrite (redpin,0);
 analogWrite (greenpin,brightness);
 analogWrite (bluepin,0);

}

 if (colorChoice=="yellow")  {

 analogWrite (redpin,brightness);
 analogWrite (greenpin,brightness);
 analogWrite (bluepin,0);

}

 if (colorChoice=="purple")  {

 analogWrite (redpin,brightness);
 analogWrite (greenpin,0);
 analogWrite (bluepin,brightness);

}
 if (colorChoice=="orange")  {

 analogWrite (redpin,brightness);
 analogWrite (greenpin,brightness);
 analogWrite (bluepin,brightness);

}

if (colorChoice!="red" && colorChoice!= "green" && colorChoice!="blue" && colorChoice!="yellow" && colorChoice!="purple"  && colorChoice!="orange"){
 Serial.println("That is not a valid color choice,please try again");
   Serial.println("");
}


}
