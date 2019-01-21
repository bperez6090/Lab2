#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

String input = "";

void loop() {
  // put your main code here, to run repeatedly:

  while (true) {
    if (Serial.available() > 0) {
      input = Serial.readStringUntil('\n');
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on for time "input"
      delay(input.toInt());
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);
    }
  }
}

// how do i define input variable?
//how do i link this code to python and receive input?
//how do i loop it properly?
