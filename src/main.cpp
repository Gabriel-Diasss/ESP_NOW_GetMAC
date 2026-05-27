/*
  ESP32 MAC Address printout
  esp32-mac-address.ino
  Prints MAC Address to Serial Monitor

  DroneBot Workshop 2022
  https://dronebotworkshop.com

[env:esp32dev]
platform = espressif32
// para rodar no esp8266, troque as linhas do .ini de board e platform para as seguintes:
#espressif8266
#esp12e
  */

// Include WiFi Library
#include "WiFi.h"
//#include "ESP8266WiFi.h"

void setup() {

  // Setup Serial Monitor
  Serial.begin(115200);

  // Put ESP32 into Station mode
  //WiFi.mode(WIFI_MODE_STA);
  WiFi.mode(WIFI_AP_STA);

  // Print MAC Address to Serial monitor
  Serial.print("MAC Address: ");
  Serial.println(WiFi.macAddress());
}

void loop() {

}