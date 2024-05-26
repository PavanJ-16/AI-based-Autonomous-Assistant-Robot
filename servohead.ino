#include <Servo.h>

Servo myservo;  
int pos = 30; 

void setup() 
{
  myservo.attach(9); 
  Serial.begin(9600);
}

void loop()
{
  char c=Serial.read();
  if(c>'0')
  {
    Serial.println(c);
    if(c=='1')
    {
      myservo.write(10);             
    delay(250);
    }
    else if(c=='2')
    {
      myservo.write(20);              
    delay(250);
    }
    else if(c=='3')
    {
      myservo.write(30);          
    delay(250);
    }
    else if(c=='4')
    {
      myservo.write(40);           
    delay(250);
    }
    else if(c=='5')
    {
      myservo.write(50);           
    }
  }
}
