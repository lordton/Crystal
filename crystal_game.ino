/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1 = 13;
const int buttonPin3 = 5;
const int buttonPin2 = 6;// the number of the pushbutton pin


const int ledPin1 =  9; //right red
const int ledPin2 =  8; // right blue
const int ledPin3 =  7; // right green

const int ledPin4 =  2;  // middle red 
const int ledPin5 =  3;  // middle blue
const int ledPin6 =  4;  // middle green


const int ledPin7 =  10;  
const int ledPin8 =  11;  // the number of the LED pin
const int ledPin9 =  12;

// variables will change:
int buttonState1 = 0;
int buttonState2 = 0;// variable for reading the pushbutton status
int buttonState3 = 0;

void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
 
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin7, HIGH);
    
  }
  else {
    // turn LED off:
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin1, LOW);
  }
  
  if (buttonState2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin8, HIGH);
    
  }
  else {
    // turn LED off:
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin2, LOW);
  }
  
  
    if (buttonState3 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin9, HIGH);
    
  }
  else {
    // turn LED off:
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
  }
  
}
