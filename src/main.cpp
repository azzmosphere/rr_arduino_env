#include "rr_environment.hpp"

void setup()
{

  HBridge l298;
  MoveForward moveForward(&l298);
  MoveStop moveStop(&l298);
  for (int i = 0; i < 8; i++)
  {
    moveForward.executeAction(100);
    delay(1000);
    moveStop.executeAction(10);
    delay(1000);
  }
}

void loop()
{

}