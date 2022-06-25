#include "HC-SR04.h"

SR04 sr04(3,2);

void setup() {
  Serial.begin(19200); 
}

void loop()
{
  Serial.print(sr04.Get());
  Serial.println(" cm" );
  delay(100);
}