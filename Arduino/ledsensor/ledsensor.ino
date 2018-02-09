 int ldr=A0;//Light dependent resistor is given to A0
 int b=7; //Led is connected to digital 7
void setup() {
     pinMode(ldr,INPUT);
     pinMode(b,OUTPUT);
     Serial.begin(9600);

}

void loop() {
  
float a=analogRead(ldr);

if(a>40)
{
digitalWrite(b,HIGH);
Serial.println(a);
delay(1000);}
else
{
digitalWrite(b,LOW);
Serial.println(a);
delay(1000);}
}
