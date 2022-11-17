char inputByte;
void setup()
 {
 Serial.begin(9600);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
}

void loop()
 {
while(Serial.available()>0)
{
  inputByte= Serial.read();
  Serial.println(inputByte);
  if (inputByte=='a')
  {
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);  
  }
  else if (inputByte=='A')
  {
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);  
  } 
  else if (inputByte=='b')
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);  
  } 
else if (inputByte=='B')
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);  
  }   
  }
}
