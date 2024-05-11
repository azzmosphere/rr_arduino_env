/******************************************************
 *  Abstract class that defines an axtion that can be 
 *  performed.
 ******************************************************/

#ifndef ACTION_HPP
#define ACTION_HPP

#include <string>

using namespace std;

class Action 
{
    public:
        // unique identifier of an action that can be performed. 
        virtual int8_t oid() {}

        // implementation of the action,  interact with the GPIO and do something.
        virtual void executeAction(float value) {}

        // human reconizable name of the action for logging purposes.
        virtual string name() 
        {
            return "";
        }
};

#endif