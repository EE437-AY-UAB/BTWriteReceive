#include <SoftwareSerial.h>

// Define RX and TX pins for the HC-06 module
#define RX 0
#define TX 1

// Create an instance of the SoftwareSerial library
SoftwareSerial BTSerial(RX, TX);

void setup() {
  // Start the built-in serial port
  Serial.begin(9600);
  
  // Start the Bluetooth serial port
  BTSerial.begin(9600);
  
  // Initialize random number generator
  randomSeed(analogRead(0));
}

void loop() {
  // Generate a random number between 0 and 4096
  int randomNumber = random(0, 4097);
  
 // Send the random number to the serial monitor
  BTSerial.write(randomNumber);
  Serial.println(randomNumber);
  // Send the random number to the BT serial monitor
  // BTSerial.println(randomNumber);
  
  
  
  // Wait for a second before sending the next number
  delay(1000);
}
