int a=4;
int b=7;
void setup() {
pinMode(a,OUTPUT); 
pinMode(b,INPUT); 
Serial.begin(9600);
}

void loop() {
  if(digitalRead(b)==1){
 digitalWrite(a,1);
 Serial.println("Led is ON");
  }else{
    digitalWrite(a,0);
    Serial.println("Led is OFF");
    }
}
