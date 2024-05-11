/************************************************
 * instructs robot to move forward.
 ***********************************************/

#ifndef MOVEFORWARD_HPP
#define MOVEFORWARD_HPP

#include <Arduino.h>
#include "Logger.hpp"
#include "Action.hpp"
#include "HBridge.hpp"

class MoveForward : public Action
{
    private:
        HBridge* _hbridge;

    public:
        MoveForward(HBridge* hbridge);

        void executeAction(float value) override;

        string name() override;
};


#endif