#include <Servo.h>  // Include the Servo library

Servo fingerServo;  // Create a Servo object to control the servo motor

int openAngle = 0;    // Angle to open the finger (0 degrees)
int closeAngle = 90;  // Angle to close the finger (90 degrees)

void setup() {
  // Attach the servo to pin 9
  fingerServo.attach(9);  
  Serial.begin(9600);    // Start serial communication
  Serial.println("Type 'open' to open the finger or 'close' to close the finger.");
}

void loop() {
  if (Serial.available() > 0) {  // Check if there is incoming data from the Serial Monitor
    String command = Serial.readStringUntil('\n');  // Read the command until a newline is received
    command.trim();  // Remove any leading or trailing whitespace
    
    if (command == "close") {
      Serial.println("Closing finger...");
      fingerServo.write(closeAngle);  // Close the finger (servo to 90 degrees)
    } 
    else if (command == "open") {
      Serial.println("Opening finger...");
      fingerServo.write(openAngle);  // Open the finger (servo to 0 degrees)
    }
    else {
      Serial.println("Invalid command. Type 'open' or 'close'.");
    }
  }
}