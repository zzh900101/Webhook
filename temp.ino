
#include "DHT.h"
//library refference: https://github.com/adafruit/DHT-sensor-library.git

#define DHTPIN 6     
#define DHTTYPE DHT22   


DHT dht(DHTPIN, DHTTYPE);



void setup() 
    {
      Serial.begin(9600);
      Serial.println(F("DHTxx test!"));
      dht.begin();
    }

void loop() 
{

  delay(30000);

  float t = dht.readTemperature();


 Particle.publish("temp",String(t),PRIVATE);

  
}