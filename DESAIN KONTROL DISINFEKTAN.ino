#define relay 12
#define sensor 11
void setup() {
  pinMode(relay,OUTPUT);
  pinMode(sensor,INPUT);
}
void loop() {
 int bacasensor = digitalRead(sensor);
 if(bacasensor==0)
{
  digitalWrite(relay,HIGH);
  delay(1000);
}
else 
{
  digitalWrite(relay,LOW);
}
}
