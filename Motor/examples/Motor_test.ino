 /*
  * @File  : Motor_test.ino
  *
  * @date  2023-03-17
  */
  
#include <Motor.h>

Motor motorA(0, 1);

void setup(){

}

void loop(){
    motorA.setSpeed(100);
    delay(5000);
    motorA.setSpeed(-100);
    delay(2000);

    motorA.stop();
}