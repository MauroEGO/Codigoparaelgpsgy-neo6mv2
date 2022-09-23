#include <SoftwareSerial.h>
#include <TinyGPS.h>

TinyGPS gps;
SoftwareSerial ss(4,3);

void setup()
{
 Serial.begin(115200);            
 ss.begin(9600); 

 Serial.print("Simple TinyGPS library v. ");
 Serial.println(TinyGPS::library_version());
 Serial.println("by Mikal Hart")
 Serial.println
}


void loop()
{
  bool newData = false;
  unsigned long chars;
  unsigned short sentences, failed;
}
