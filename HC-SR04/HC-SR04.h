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
