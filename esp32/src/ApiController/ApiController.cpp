#include "ApiController.h"
#include "ApiController/ApiDocumentation_html.h"
#include "ApiController/ApiSpecification_yaml.h"

const int port = 80;
WebServer webServer(port);

// handle connected http clients
void ApiController::handleConnections()
{
  webServer.handleClient();
}

// register http api endpoints
void ApiController::initialize()
{
  // returns api specification overview page
  webServer.on("/", std::bind(&ApiController::apiDefaultPage, this));
  // returns plain openapi specification yaml
  webServer.on("/api.yaml", std::bind(&ApiController::apiSpecificationYAML, this));
  // start web server
  webServer.begin();
}

void ApiController::apiDefaultPage()
{
  webServer.send(200, "text/html", API_DOCUMENTATION_HTML);
}

void ApiController::apiSpecificationYAML()
{
  webServer.send(200, "text/plain", API_SPECIFICATION_YAML);
}
