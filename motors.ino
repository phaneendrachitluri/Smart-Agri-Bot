int m11 = 31;
int m12 = 32;
int m21 = 33;
int m22 = 34;
void setup() {
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(m11,HIGH);
  delay(100);
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  delay(100);
  digitalWrite(m12,LOW);
  digitalWrite(m21,HIGH);
  delay(100);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
  delay(100);
  digitalWrite(m22,LOW);
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);
  delay(100);
}
void forward()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
}
void backward()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
}
void left()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,HIGH);
  digitalWrite(m21,HIGH);
  digitalWrite(m22,LOW);
}
void right()
{
  digitalWrite(m11,HIGH);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,HIGH);
}
void stop1()
{
  digitalWrite(m11,LOW);
  digitalWrite(m12,LOW);
  digitalWrite(m21,LOW);
  digitalWrite(m22,LOW);
}
