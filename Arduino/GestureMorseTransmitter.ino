#include <SPI.h>
#include <RF24.h>

const int dotPin = A0;  // Input for dot
const int dashPin = A1; // Input for dash
const int spacePin = A2; // Input for space

RF24 radio(9, 10); // NRF24L01 CE and CSN pins

const byte address[6] = "00001";

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  int dotValue = analogRead(dotPin);
  int dashValue = analogRead(dashPin);
  int spaceValue = analogRead(spacePin);
  
  if (dotValue > 800) {
    const char text[] = ".";
    radio.write(&text, sizeof(text));
    Serial.println("Dot sent");
  }
  else if (dashValue > 800) {
    const char text[] = "-";
    radio.write(&text, sizeof(text));
    Serial.println("Dash sent");
  }
  else if (spaceValue > 800) {
    const char text[] = " ";
    radio.write(&text, sizeof(text));
    Serial.println("Space sent");
  }
  
  delay(500); // Simple delay for signal handling
}
