#include <dht.h>

dht DHT;
#define DHT11_PIN 12

int F=0, K=0 ;
void setup(){
Serial.begin(9600);
}

void loop()
{
int okunanDeger = DHT.read11(DHT11_PIN);
if(DHT.temperature!=-999.00 && DHT.humidity!=-999.00){
Serial.print("Temperature (Celsius)= ");
Serial.println(DHT.temperature);
K=DHT.temperature+273.15;
Serial.print("Temperature (Kelvin)= ");
Serial.println(K);
F=(DHT.temperature*(1.8))+32;
Serial.print("Temperature (Fahrenheit)= ");
Serial.println(F);

Serial.print("Humidity = ");
Serial.println(DHT.humidity);
delay(5000);}
}
