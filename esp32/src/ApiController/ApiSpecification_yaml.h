const char API_SPECIFICATION_YAML[] PROGMEM = R"=====(
swagger: '2.0'
info:
  title: 'ESP32 Example API Documentation'
  description: 'API Documentation of esp32 example project.'
  version: 1.0.0
  contact: 'mail@example.com'
basePath: /
paths:
  /api/device/information:
    get:
      tags:
        - Get Device Information
      summary: Get information about the device
      responses:
        '200':
          description: Successfully read device information
          schema:
            type: object
            properties:
              uptime:
                type: number
                example: 53082332
              memory_free:
                type: number
                example: 2048
              healthy:
                type: boolean
                example: true
  /api/device/restart:
    get:
      tags:
        - Restart Device
      summary: Restart the device
      responses:
        '200':
          description: Success
          schema:
            type: object
            properties:
              success:
                type: boolean
                example: true
)=====";