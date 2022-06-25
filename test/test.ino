#include "HC-SR04.h"

SR04 sr04(3,2);
//float time_now = 0;

void setup() {
    Serial.begin(19200);

}

void loop() {
    float distance = sr04.Get();

    Serial.print("\nCM:");
    Serial.print(distance);
    //time_now = time_now+0.1;
    Serial.print("\ntime:");
    //Serial.print(time_now);
    Serial.println();
    delay(100);
}
