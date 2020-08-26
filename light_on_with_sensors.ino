void setup()
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);
 }

void loop() 
{
  int ldrvalue=analogRead(A0);
  if(ldrvalue<=10)
  {digitalWrite(7,HIGH);}
  else
  {digitalWrite(7,LOW);}

}
