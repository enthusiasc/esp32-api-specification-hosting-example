#include "ApiController/ApiController.h"

const char *ssid = "Jupiter";
const char *pw = "69520405008405358281";

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