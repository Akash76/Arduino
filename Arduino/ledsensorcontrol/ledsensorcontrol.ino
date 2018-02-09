 int ldr=A0;//Light dependent resistor is given to A0
 int b=3; //Led is connected to ~3
void setup() {
     pinMode(ldr,INPUT);
     pinMode(b,OUTPUT);
     Serial.begin(9600);

}

void loop() {
  
float a=analogRead(ldr);

if(a>=40 && a<300)
{
analogWrite(b,255);
Serial.println(a);
delay(1000);
}
if(a>10 && a<40){
  analogWrite(b,150);
Serial.println(a);
}

else
{
analogWrite(b,0);
Serial.println(a);
}
}
