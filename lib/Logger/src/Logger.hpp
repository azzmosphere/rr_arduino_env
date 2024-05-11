#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <Serial.h>

using namespace std;

class Logger {
    public:
        static inline void info(string m) {
            // cout << "INFO: " << m << endl;
            string out = "INFO: " + m;
            Serial.println(out.c_str());
        }

        static inline void error(string m) {
             string out = "ERROR: " + m;
            Serial.println(out.c_str());
        }
};

#endif