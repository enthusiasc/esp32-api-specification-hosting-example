#About
This repository contains a minimal example for how to host your custom api specification on an esp32 microcontroller.
The microcontroller will connect to a given wifi network and create a webserver. When navigating to the ip address of the 
microcontroller in a web browser, it will show its API specification in a convenient way. This is especially useful as 
projects increase in complexity.

#Get started
1: Import PlatformIO Project
2: Adjust WIFI credentials in main.cpp
3: Adjust board type in platformio.ini to match your esp32 compatible microcontroller
4: Upload sketch to microcontroller

#Configuration
Create an OpenAPI specification file (yaml) and replace it in ApiSpecification_yaml.h.
This could be done with https://editor.swagger.io.

This example uses https://github.com/rapi-doc/RapiDoc to visualize the api specification.
The visualisation is configurable as described in the RapiDoc documentation.
Changes to the configuration can be done in ApiDocumentation_html.h
