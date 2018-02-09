#include<LiquidCrystal.h>
LiquidCrystal A(12,9,3,4,5,6);

void setup() {
Serial.begin(9600);
A.begin(16,2);
A.clear();
}

void loop() {
  if (Serial.available()>0){
  char b;
b=Serial.read();
A.clear();
A.print(b);
delay(150);}

}
