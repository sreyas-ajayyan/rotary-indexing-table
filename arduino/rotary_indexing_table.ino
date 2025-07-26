#include <Stepper.h>
const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
void setup() 
{
  myStepper.setSpeed(10);
}
void loop() 
{
  for (int i = 0; i < 4; i++) 
  {
    myStepper.step(stepsPerRevolution / 4);
    delay(2000);
  }
 delay(4000);
}
