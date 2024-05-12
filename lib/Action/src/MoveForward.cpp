/***********************************************
 * Move the engines forward.
 ***********************************************/

#include "MoveForward.hpp"

MoveForward::MoveForward(HBridge* hbridge)
{
    _hbridge = hbridge;
}

void MoveForward::executeAction(float value)
{
    Logger::info("executing move forward");
    _hbridge->driveWheels(HIGH, LOW, HIGH, LOW, int(value), int(value));
}

string MoveForward::name()
{
    return "move-forward";
}