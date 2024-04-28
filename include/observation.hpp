/**
 * single observation object. 
 * 
 * Each observation MUST have an Observer ID (8 bit integer).  This identifies the observer for the observation.
 * The observer MAY also have a name which SHOULD be unique, this is part of the name field.
 * Finally an observaton has a value which is always float.
 */

#ifndef OBSERVATION_HPP
#define OBSERVATION_HPP

#include <Ardiuno.h>

class Observation {
    private:
       uint_8 _oid;    // mapping variable for the observation.
       string _name;   // human readable name of the observation.
       float  _value;  // value.
};

#endif