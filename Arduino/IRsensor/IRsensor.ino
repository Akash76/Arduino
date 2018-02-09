int a=7;
int b=4;
int ldr=A0;
void setup() {
  pinMode(a,INPUT);
  pinMode(b,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}

void loop() {
  float c=analogRead(ldr);
  if(digitalRead(a)==1 && c>40 && c<200){
    digitalWrite(b,LOW);
    Serial.println(c);
    delay(1000);
    }
    if(digitalRead(a)==0 && c<=40){
      digitalWrite(b,HIGH);
      Serial.println(c);
      }
      if(digitalRead(a)==0 && c>40 && c<200){
      digitalWrite(b,LOW);
      Serial.println(c);
      delay(1000);
      }
    else{
    digitalWrite(b,LOW);
    Serial.println(c);
    delay(1000);
    }

}
