//comment: servo definitons.

#include <Servo.h>
Servo base, shoulder, wrist, elbow1, elbow2, grip;
struct Pins {

  int b = 13;
  int s = 12;
  int w = 11;
  int e1 = 10;
  int e2 = 9;
  int g = 8;
};
Pins pins;


void setup() {

  base.attach(pins.b);
  shoulder.attach(pins.s);
  wrist.attach(pins.w);
  elbow1.attach(pins.e1);
  elbow2.attach(pins.e2);
  grip.attach(pins.g);

  base.write(45);
  delay(300);
  base.write(135);

}

void loop() {
  
  
}
