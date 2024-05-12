/**********************************************************
 * Abstract representation of a H-Bridge circuite used
 * to power two DC motors.
***********************************************************/

#ifndef HBRIDGE_HPP
#define HBRIDGE_HPP

#include <Arduino.h>


class HBridge {
    public:
        // the setup method MUST set up motorA, and motorB,  it will be the first method called.
        void setup();

        // deconstruts the HBridge.
        void teardown();

        // drives the wheels.
        void driveWheels(pin_size_t in1, pin_size_t in2, pin_size_t in3,  pin_size_t in4, int ena, int enb);
};

#endif