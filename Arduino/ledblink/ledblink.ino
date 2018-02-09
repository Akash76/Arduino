int a=4;
int b=7;
void setup() {
pinMode(a,OUTPUT); 
pinMode(b,INPUT); 
}

void loop() {
  if(digitalRead(b)==HIGH){
 digitalWrite(a,HIGH);
  }else{
    digitalWrite(a,LOW);
    }
}
