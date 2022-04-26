#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = ""; //токен авторизации
char ssid[] = "RingoStarr";
char pass[] = "4815162342";

BLYNK_CONNECTED()
{
  Blynk.syncVirtual(V0); //синхронизация состояния порта V0
}

BLYNK_WRITE(V0) //инициализация порта V0
{
  int myInt = param.asInt();
  if (myInt == 0)
  {
    digitalWrite(4, LOW); //Если V0=0,тогда на GPIO4=1
  }
  if (myInt == 1)
  {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    Blynk.virtualWrite(V0, LOW);
  }
}

void setup()
{
  pinMode(4, OUTPUT); //назначение порта 4 как выхода
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  Blynk.syncAll();
}
void loop()
{
Blynk.run();
}
