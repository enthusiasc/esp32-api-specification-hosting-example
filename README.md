# About
This repository contains a minimal example for how to host your custom api specification on an esp32 microcontroller.
The microcontroller will connect to a given wifi network and create a webserver. When navigating to the ip address of the 
microcontroller in a web browser, it will show its API specification in a convenient way. This is especially useful as 
projects increase in complexity.

# Get started
 - Import PlatformIO Project
 - Adjust WIFI credentials in main.cpp
 - Adjust board type in platformio.ini to match your esp32 compatible microcontroller
 - Upload sketch to microcontroller
 - Navigate to the ip address of the microcontroller and browse the API specification hosted on the device
 - Its also possible to access route /api.yaml to browse plain yaml specification

 ![image](https://user-images.githubusercontent.com/84862844/226103108-8bf7fbf8-f636-483a-b139-3a79cfb5a9ab.png)

# Configuration
Create an OpenAPI specification file (yaml) and replace it in ApiSpecification_yaml.h.
This could be done with https://editor.swagger.io.
This example uses https://github.com/rapi-doc/RapiDoc to visualize the api specification.
The visualisation is configurable as described in the RapiDoc documentation.
Changes to the configuration can be done in ApiDocumentation_html.h
