//2022.6.25 P.M.1:44
//TPAXcc Form github.com/TPAXcc/Arduino-Ultrasonic
//添加注释

#ifndef HC-SR04_h
#define HC-SR04_h   //定义 HC-SR04.h 头文件

//Arduino 版本兼容
#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class SR04 {    //声明 SR04 类
    public:
    SR04(int TP, int EP);   //声明 SR04 函数用于初始化对象
    float Get();    //声明 Get 函数用于数据获取/处理

    private:
    //记录所用引脚
    int Trig_Pin;
    int Echo_Pin;
    //记录回传数据
    float distance;
    
};

#endif
