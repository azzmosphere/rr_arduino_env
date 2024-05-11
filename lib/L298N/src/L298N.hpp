#ifndef KEYESTUDIOL298N_HPP
#define KEYESTUDIOL298N_HPP

#include <Arduino.h>
#include "HBridge.hpp"

class L298N : public HBridge {

    void setup() override;

    void driveWheels(uint32_t in1, uint32_t in2, uint32_t in3,  uint32_t in4, uint32_t ena, uint32_t enb);
};

#endif