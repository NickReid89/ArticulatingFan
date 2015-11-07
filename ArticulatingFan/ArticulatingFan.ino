#include <Servo.h>  // servo library
Servo servoArticulatingBase;  // servo control object
void setup() {
  servoArticulatingBase.attach(9);
  
}

void loop() {

  //Testing where the stop and end are.
  servoArticulatingBase.write(180);    // Tell servo to go to 90 degrees
  delay(1000);

  /* for(int i = 0; i < 180; i += 1)
  {
    servoArticulatingBase.write(i);  // Move to next position
    delay(20);               // Short pause to allow it to move
  } */
  // A servo motor must always be running, if I hold it in one spot it figits.
  // For now I have it detaching.
  servoArticulatingBase.detach();
  
}
