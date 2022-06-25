//2022.6.25 12:12 Ver.1.1.0-Alpha 初始版本 / Initial Release
//TPAXcc Form github.com/TPAXcc/Arduino-Ultrasonic

#ifndef HC-SR04_H
#define HC-SR04_H

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class SR04 
{
private:
    SR04(int TP,int EP);
    float Get();

public:
    int Trig;
    int Echo;
    float distance;

};

#endif
