#include "Arduino.h"
#include <InternetConnection.h>

InternetConnection ic;

void setup()
{
  ic.setup();

  // InternetConnection::setup();

}

void loop()
{
  ic.loop();
  // ic.open_url("http://cmmc.xyz/hello.txt");
  // JsonObject& data = ic.get_json_by_url("http://192.168.1.65/school/stenden/jaar1/periode4/?page=test1");
  // Serial.println(data['page']);

  String data = ic.http_get("http://192.168.1.65/school/stenden/jaar1/periode4/?page=test2");
  Serial.println(data);

  // InternetConnection::loop();

}

// // StaticJsonBuffer<512> jsonBuffer;//200
// DynamicJsonBuffer jsonBuffer(100);//512
//
// JsonObject& InternetConnection::json_parse(String data){
//
//   // Parse json
//   JsonObject& root = jsonBuffer.parseObject(data);
//
//   // Test if parsing succeeds.
//   if (!root.success()) {
//     Serial.println("[JSON] parseObject() failed");
//     Serial.println("[OBJECT] " + root);
//     return jsonBuffer.parseObject("NULL");
//   }
//
//   // return data
//   return root;
// }
// JsonObject& InternetConnection::get_json_by_url(String url){
//     String data = this->http_get(url);
//     return this->json_parse(data);
// }
