int k=4;
void setup() {
pinMode(k,OUTPUT);  
Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    char ch=Serial.read();
    if(ch=='A')
      digitalWrite(k,HIGH);
      
      if(ch=='s')
        digitalWrite(k,0);
     
    
}
}
