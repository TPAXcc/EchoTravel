//2022.6.25 P.M.1.27 Ver.1.1.1-Beta 重构版本 / Refactoring Release
//TPAXcc Form github.com/TPAXcc/Arduino-Ultrasonic
//修复了无法运行的 BUG / Fixed BUG to not run

#ifndef HC-SR04_h
#define HC-SR04_h

#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class SR04
{
  public:
    SR04(int TP, int EP);
    float Get();

  private:
    int Trig_Pin;
    int Echo_Pin;
    float distance;
    
};

#endif
