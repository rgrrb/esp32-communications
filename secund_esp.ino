//**********************************************
// ESP32 Cliente - DHT11 -> Envio HTTP
//**********************************************

#include <WiFi.h>
#include <HTTPClient.h>
#include "DHT.h"


// DHT

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// WiFi
const char* ssid = "IoT-B08";
const char* password = "12345678";

// Servidor (ESP32 #1)
const char* 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
