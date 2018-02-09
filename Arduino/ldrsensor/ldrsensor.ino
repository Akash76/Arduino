 int ldr=A0;

void setup() {
     pinMode(ldr,INPUT);
     Serial.begin(9600);

}

void loop() {
  
float a=analogRead(ldr);

Serial.println(a);
delay(1000);
}
