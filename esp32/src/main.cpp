#include "ApiController/ApiController.h"

const char *ssid = "MY_SSID";
const char *pw = "MY_PASSWORD";

ApiController *apiController = new ApiController();

void setup()
{
  // setup wifi
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.begin(ssid, pw);
  // start web server
  apiController->initialize();
}

void loop()
{
  apiController->handleConnections();
  delay(20);
}
