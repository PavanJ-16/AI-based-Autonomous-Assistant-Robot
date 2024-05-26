
#define BLYNK_PRINT Serial



#define BLYNK_TEMPLATE_ID "ID"
#define BLYNK_TEMPLATE_NAME "NAME"
#define BLYNK_AUTH_TOKEN "TOKEN"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char ssid[] = "SSID";
char pass[] = "PASS";

void setup()
{
  
  Serial.begin(9600);
  Serial.println("Alive");
pinMode(18,OUTPUT);
pinMode(21,OUTPUT);
pinMode(22,OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.println("Connected?");
}

BLYNK_WRITE(V0)
{   
  int red = param.asInt(); 
  if(red>0)
    digitalWrite(18,HIGH);
  else
  digitalWrite(18,LOW);
}

BLYNK_WRITE(V1)
{   
  int green = param.asInt(); 
  if(green>0)
    digitalWrite(21,HIGH);
  else
  digitalWrite(21,LOW);
}

BLYNK_WRITE(V2)
{   
  int blue = param.asInt(); 
  if(blue>0)
    digitalWrite(22,HIGH);
  else
  digitalWrite(22,LOW);
}
void loop()
{
  Blynk.run();
Serial.println("inloop");

}

