#include "L298N.hpp"

void L298N::setup()
{
    _motorA._en  = 11;
    _motorA._in2 = 12;
    _motorA._in1 = 13;
   
    _motorB._en  = 3;
    _motorB._in2 = 4;
    _motorB._in1 = 5;

    pinMode(_motorA._en, OUTPUT);
    pinMode(_motorA._in1, OUTPUT);
    pinMode(_motorA._in2, OUTPUT);

    pinMode(_motorB._en, OUTPUT);
    pinMode(_motorB._in1, OUTPUT);
    pinMode(_motorB._in2, OUTPUT);
}

void L298N::driveWheels(uint32_t in1, uint32_t in2, uint32_t in3, uint32_t in4, uint32_t ena, uint32_t enb)
{
    digitalWrite(_motorA._in1, in1);
    digitalWrite(_motorA._in2, in2);

    digitalWrite(_motorB._in1, in3);
    digitalWrite(_motorB._in1, in4);

    analogWrite(_motorA._en, ena);
    analogWrite(_motorB._en, enb);
}