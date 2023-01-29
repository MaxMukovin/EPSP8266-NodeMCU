#include "ESP8266WiFi.h"
#include "EspMQTTClient.h" 
#define PUB_DELAY (5 * 1000)

EspMQTTClient client(
  "RingoStarr",
  "4815162342",
  "dev.rightech.io",
  "mqtt-maxmukovin-qj6am8"
);
void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  Serial.begin(9600);
}

void onConnectionEstablished() {

  Serial.println("connected");

  client.subscribe("base/relay/pin1", [] (const String & payload) {
    Serial.println(payload);
    digitalWrite(4, payload.toInt());
  });

    client.subscribe("base/relay/pin1", [] (const String & payload) {
    if (!payload.toInt() == 0){
    digitalWrite(4, payload.toInt());
    delay(500);
    digitalWrite(4, !payload.toInt());
    }
  });
}
   
void loop() {
  client.loop();
}
