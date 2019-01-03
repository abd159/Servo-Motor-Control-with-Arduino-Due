#include <Servo.h>

Servo myservo1;                 // providing a name
Servo myservo2;                 // providing a name

int angle = 0;                     // variable to store the servo position

void setup() {
  myservo1.attach(8);        // attaches the servo on pin 2 to the servo object
  myservo2.attach(7);        // attaches the servo on pin 2 to the servo object
}

void loop() {
  for (angle = 0; angle <= 180; angle += 1) {     // goes from 0 degrees to 180 degrees, in steps of 1 degree
    myservo1.write(angle);                                     // tell servo to go to position in variable 'angle'
    myservo2.write(angle);                                     // tell servo to go to position in variable 'angle'
    delay(15);                                                        // waits 15ms for the servo to reach the position
  }
  for (angle = 180; angle >= 0; angle -= 1) {     // goes from 180 degrees to 0 degrees
    myservo1.write(angle);              
    myservo2.write(angle);     
    delay(15);                                                       // waits 15ms for the servo to reach the position
  }
}
