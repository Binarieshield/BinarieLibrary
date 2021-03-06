/*

Title: 					BinaariLibrary
Original creator: 		Jussi Wallin
Original release URL: 	https://github.com/Binaari/BinaariLibrary
Original release date:	12/12/2016 (dd/mm/yyyy)
License:
This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/.

*/



#ifndef BinaariLib_h
#define BinaariLib_h

#include "Arduino.h"

#include "Buzzer.h"
#include "RGBLed.h"
#include "EnvironmentSensor.h"

class BinaariLibrary {
    public:

    Buzzer buzzer;
    RGBLed RGB;
    EnvironmentalSensor env;

    void initialize() {
        buzzer.initialize();
        RGB.initialize();
        env.init();
    }
};

#endif