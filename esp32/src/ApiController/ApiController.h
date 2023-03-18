#include "WebServer.h"
#include "ArduinoJson.h"

class ApiController
{
public:
    ApiController() {}
    void initialize();
    void handleConnections();

private:
    void apiDefaultPage();
    void apiSpecificationYAML();
};