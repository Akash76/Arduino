#include<Servo.h>
Servo asdf; 

void setup() {
  asdf.attach(3);

}

void loop() {
  asdf.write(180);
  delay(10);
  asdf.write(90);
  delay(10);
}
