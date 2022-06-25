//2022.6.25 12:29 Ver.1.1.0-Alpha 初始版本 / Initial Release
//TPAXcc Form github.com/TPAXcc/Arduino-Ultrasonic

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#include "HC-SR04.h"

SR04::SR04(int TP, int EP) {
    pinMode(EP,INPUT);
    pinMode(TP,OUTPUT);
    Echo = EP;
    Trig = TP;
}

float SR04::Get() {
    digitalWrite(Trig,LOW);
    delayMicroseconds(2);
    digitalWrite(Trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(Trig,LOW);

    distance = pulseIn(Echo, HIGH)/58;
    return distance;
}
