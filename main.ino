#include <Servo.h>
// Define the servos for the arm
//Servo wrist;
Servo thumb;
Servo indexFinger;
Servo middleFinger;
Servo ringFinger;
Servo pinkyFinger;

void setup() {
// Attach the servos to the correct pins
// wrist.attach(12);
thumb.attach(3);
indexFinger.attach(6);
middleFinger.attach(9);
ringFinger.attach(10);
pinkyFinger.attach(11);
// Move the servos to the initial positions
// wrist.write(wristPosition);
}
void loop() {
middleFinger.write(360);
//thumb.write(0);
indexFinger.write(360);
//ringFinger.write(360);
//pinkyFinger.write(360);
delay(1000);
//thumb.write(360);
indexFinger.write(0);
middleFinger.write(0);
//ringFinger.write(0);

//pinkyFinger.write(0);
delay(1000);
// Move the servos to the new positions
// wrist.write(wristPosition);
// Wait for a moment before opening the fingers again

// Open all fingers again

// Move the servos to the new positions
// Wait for a moment before closing the fingers again

// Move the servos to the new positions
}
