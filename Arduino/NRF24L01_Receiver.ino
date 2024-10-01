#include <SPI.h>
#include <RF24.h>

RF24 radio(9, 10); // CE and CSN pins for NRF24L01

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.startListening(); // Simplified setup
}

void loop() {
  if (radio.available()) {
    char buffer[32]; // Buffer for incoming data
    radio.read(&buffer, sizeof(buffer));
    Serial.println(buffer); // Print the received data
  }
}
