//comment: servo definitons.

#include <Servo.h>
Servo base;
Servo shoulder;
Servo wrist;
Servo elbow1;
Servo elbow2;
Servo grip;
struct Pins {

  int b = 9;
  int s = 10;
  int w = 8;
  int e1 = 11;
  int e2 = 12;
  int g = 13;
};
Pins pins;


void setup() {

  base.attach(pins.b);
  shoulder.attach(pins.s);
  wrist.attach(pins.w);
  elbow1.attach(pins.e1);
  elbow2.attach(pins.e2);
  grip.attach(pins.g);

  base.write(90); // 0-180 half chamber 90 angel look forward
  shoulder.write(160); //0-180 half-cycle ideal angle 160- for normal 70 for uzanma 
  wrist.write(90); // uzanması 120 normali 90
  elbow1.write(75); // normal 75 0-180 yukarı aşağı angle serbest
  elbow2.write(180); // 0-180 speed turn 
  grip.write(180); // 150- open 180- closed


}

void loop() {
  
  
}
