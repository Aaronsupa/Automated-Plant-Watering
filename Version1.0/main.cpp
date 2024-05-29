#include <Arduino.h>

int relayPin = 2;

void setup() {
  Serial.begin(74880);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Now Watering Plant.");
  digitalWrite(relayPin, HIGH);
  delay(5000);
  digitalWrite(relayPin, LOW);
  delay(604800);
  if(Serial.available()) {
    String cmd = Serial.readString();
    if(cmd == "on") {
      digitalWrite(relayPin, HIGH);
    } else if(cmd == "off") {
      digitalWrite(relayPin, LOW);
    }
  }
}

