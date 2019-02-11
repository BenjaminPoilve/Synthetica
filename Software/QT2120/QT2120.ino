#include <CapacitiveV2.h>

// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.x / Teensy LC have the LED on pin 13

const int ledPin = 13;
CapacitiveV2 sensor;
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  sensor.InitCapacitive();
  sensor.SetPinToKey(10);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  if(sensor.ReadKey(10)){
      digitalWrite(ledPin, HIGH);   // set the LED on

  }else{
  digitalWrite(ledPin, LOW);    // set the LED off
  }
}

