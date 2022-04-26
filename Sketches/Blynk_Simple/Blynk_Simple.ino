#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = ""; //токен авторизации
char ssid[] = "RingoStarr";
char pass[] = "4815162342";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  Blynk.syncAll(); 
}
void loop()
{
Blynk.run();
}
