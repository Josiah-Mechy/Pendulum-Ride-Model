// if you are confused as to how to get the servo motor working, fiddle with this
#include <Servo.h> // Include the Servo library

Servo myServo; // Create a Servo object

const int servoPin = 11; // Z+ pin is mapped to D11 on the CNC Shield

void setup() {
  myServo.attach(servoPin); // Attach the servo to the pin
  Serial.begin(9600);
  Serial.println("Servo test starting...");
}

void loop() {
  // Sweep the servo from 0° to 180°
  for (int angle = 0; angle <= 180; angle += 5) {
    myServo.write(angle);          // Set servo position
    delay(1);  // this controls the SPEED of motor       // Wait for the servo to move
  }

  delay(1000); // Pause for 1 second. after movement of motor, pause for a second

  // Sweep the servo back from 180° to 0°
  for (int angle = 180; angle >= 0; angle -= 5) {
    myServo.write(angle);          // Set servo position
    delay(1); // this controls the SPEED of motor       // Wait for the servo to move 
    // making the delay smaller increases the speed of the execution
  }

  delay(1000); // Pause for 1 second. after movement of motor, pause for a second
}
