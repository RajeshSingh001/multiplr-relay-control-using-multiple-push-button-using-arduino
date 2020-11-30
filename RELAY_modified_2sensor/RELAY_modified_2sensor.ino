
void setup()
{
  //start serial connection
 // Serial.begin(9600);
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal1 = digitalRead(5);
   int sensorVal2 = digitalRead(4);
  //print out the value of the pushbutton
  //Serial.println(sensorVal);

  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (sensorVal1 == LOW)
  {
    digitalWrite(12, HIGH);
  } 
  else if (sensorVal2 == LOW)
  {
    digitalWrite(11, HIGH);
  } 
 
  else 
  {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
}
