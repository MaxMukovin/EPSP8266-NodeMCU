#include "ESP8266WiFi.h"
#include "EspMQTTClient.h" 
#define PUB_DELAY (5 * 1000)

EspMQTTClient client(
  "RingoStarr",
  "4815162342",
  "dev.rightech.io",
  "mqtt-maxmukovin-0o9iyx"
);
void setup() {
  pinMode(0, OUTPUT);
  digitalWrite(0, 1);
  Serial.begin(9600);
}

void onConnectionEstablished() {

  Serial.println("connected");

    client.subscribe("base/relay/wakepc1", [] (const String & payload) {
      Serial.println(payload);
      if (!payload.toInt() == 0){
      digitalWrite(0, !payload.toInt());
      delay(200);
      digitalWrite(0, payload.toInt());
      }
    });
    client.subscribe("base/relay/rebootpc1", [] (const String & payload) {
      Serial.println(payload);
      if (!payload.toInt() == 0){
      digitalWrite(0, !payload.toInt());
      delay(7000);
      digitalWrite(0, payload.toInt());
      }
    });
}
   
void loop() {
  client.loop();
}
