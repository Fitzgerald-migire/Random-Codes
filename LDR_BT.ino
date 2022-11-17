#include <SoftwareSerial.h>

SoftwareSerial bluetooth(0,1); //RX, TX
int input;
int device = A0;
int red_light_pin= 8;
int green_light_pin = 9;
int blue_light_pin = 10;

void setup() 
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(device, INPUT);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() 
{
  input = analogRead(device);
  bluetooth.print(input);
  bluetooth.print(";");
  if(input>=0&&input<=50)
  {
    digitalWrite(red_light_pin,HIGH);
   }
   else if(input>50&&input<=100)
   {
    digitalWrite(green_light_pin,HIGH);
   }
   else if(input>101)
   {
    digitalWrite(blue_light_pin,HIGH);
   }
   
  Serial.println(input);
  delay(1000);
}
