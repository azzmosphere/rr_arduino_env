/**********************************************************
 * Abstract representation of a H-Bridge circuite used
 * to power two DC motors.
***********************************************************/

#ifndef HBRIDGE_HPP
#define HBRIDGE_HPP

#include <stdint.h>

typedef struct {
    uint32_t _in1;
    uint32_t _in2;
    uint32_t _en; 

} motor;

class HBridge {
    protected:

        motor _motorA;
        motor _motorB;


    public:
        // the setup method MUST set up motorA, and motorB,  it will be the first method called.
        virtual void setup() {}

        // deconstruts the HBridge.
        virtual void teardown() {}

        // drives the wheels.
        virtual void driveWheels(uint32_t in1, uint32_t in2, uint32_t in3,  uint32_t in4, uint32_t ena, uint32_t enb) {}
};

#endif