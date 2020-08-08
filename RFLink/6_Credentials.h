// ************************************* //
// * Arduino Project RFLink-esp        * //
// * https://github.com/couin3/RFLink  * //
// * 2018..2020 Stormteam - Marc RIVES * //
// * More details in RFLink.ino file   * //
// ************************************* //

#ifndef CREDENTIALS_h
#define CREDENTIALS_h

#include "RFLink.h"
#ifndef AUTOCONNECT_ENABLED

// local AP
String WIFI_SSID = "your_SSID";
String WIFI_PSWD = "your_PWD";

// static IP
String WIFI_IP = "192.168.2.145";
String WIFI_DNS = "192.168.2.1";
String WIFI_GATEWAY = "192.168.2.1";
String WIFI_SUBNET = "255.255.255.0";

// MQTT Server
String MQTT_SERVER = "mqtt.lan";
String MQTT_PORT = "1883";
String MQTT_ID = "ESP8266-RFLink";
String MQTT_USER = "your_mqtt_user";
String MQTT_PSWD = "your_mqtt_pswd";

// MQTT Topic
String MQTT_TOPIC_OUT = "/RFLink/msg";
String MQTT_TOPIC_IN = "/RFLink/cmd";

#endif
#endif
