
#include <Arduino.h>
#include <Servo.h>
Servo myservo; // create servo object to control a servo
void setup() {
// write your initialization code here
    myservo.attach(9); // attaches the servo on pin 9 to the servo object
}


void loop() {
   myservo.write(0); // tell servo to go to position in variable 'pos'
    delay(1000); // waits 1 second for the servo to reach the position
    myservo.write(90); // tell servo to go to position in variable 'pos'
    delay(1000); // waits 1 second for the servo to reach the position
    myservo.write(180); // tell servo to go to position in variable 'pos'
}