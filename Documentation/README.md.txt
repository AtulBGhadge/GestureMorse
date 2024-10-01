# GestureMorse Wearable Morse Code Transmitter

## Overview
GestureMorse is a wearable Morse code transmitter using a glove equipped with potentiometers to detect finger movements. The Arduino processes these inputs and sends Morse code wirelessly using the NRF24L01 module.

## Components
- 3x Potentiometers
- Arduino Uno
- NRF24L01 Wireless Module
- Jumper Wires
- Breadboard

## Setup
1. Upload the `GestureMorseTransmitter.ino` file to the transmitter Arduino.
2. Upload the `NRF24L01_Receiver.ino` file to the receiver Arduino.
3. Wire the components as shown in the `CircuitDiagram.pdf`.
4. Power the Arduino and test by moving your fingers to generate Morse code.

## License
MIT License
