#include <Arduino.h>

constexpr static const uint8_t kLedPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(kLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(kLedPin, HIGH);
  delay(1000);
  digitalWrite(kLedPin, LOW);
  delay(1000);}