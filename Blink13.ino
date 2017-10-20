/*
  
 Blink pin 13

 Turns an LED connected to pin 13 on for one second, then off for one second, repeatedly.
 
Mechatronics Workshop
John.Wild@rca.ac.uk
*/

int ledPin = 13;    // LED connected to digital pin 13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
