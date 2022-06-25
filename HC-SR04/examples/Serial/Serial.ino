//2022.6.25 P.M.1.21 Ver.1.1.1-Beta 重构版本 / Refactoring Release
//TPAXcc Form github.com/TPAXcc/Arduino-Ultrasonic
//修复了无法运行的 BUG / Fixed BUG to not run

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
