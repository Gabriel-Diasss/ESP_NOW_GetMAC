/*
  ESP32 MAC Address printout
  esp32-mac-address.ino
  Prints MAC Address to Serial Monitor
  Created by Gabriel Dias.
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