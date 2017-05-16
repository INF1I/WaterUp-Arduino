#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiConnector.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>



class InternetConnection;

class InternetConnection{
  private:
    void init_hardware();
    void init_wifi();
  public:
    void setup();
    void loop();
    String http_get(String url = "");

};
