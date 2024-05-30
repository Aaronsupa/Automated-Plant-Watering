# Automated Plant Watering Device with ESP32
🌱 At home plant watering system automated on Esp32

## Version 1.0
For Version 1.0, the main.cpp file controls how often the Esp32 will water the plant in the system. Some information will output in the serial monitor as well, each time the plant is watered. My plant is a succulent and only needs water once every week. 

>Hardware necessary:
- Esp32
- Jumper cables
- Relay
- Power source
- Peristaltic Dosing Pump

>Libraries
- Arduino.h
  
## Version 2.0
For version 2.0, I implemented a web server that allows for a user to control the dosing pump. I made updates to the main.cpp file to implement the site, based on code samples from https://randomnerdtutorials.com/esp32-web-server-arduino-ide/. In addition, I created a settings.h file for configuring information. No additional hardware is necessary for the circuit, however a stable wifi connection is necessary to run the server on the Esp32.

>Additional Libraries
- Wifi.h

## Version 3.0
For version 3.0, I added a **DHT11 sensor** to monitor temperature and humidity. This will be monitored using InfluxDB in version 4.0. To implement the DHT sensor, I added the jumper connections to the ESP32, imported the necessary libraries, and programmed to ensure the connection was stable.

>Additional Libraries
- Adafruit_Sensor.h
- DHT.h
- DHT_U.h

## Version 4.0
For version 4.0, I linked my application to **InfluxDB** for monitoring the temperature, humidity, and in the future, wifi connection information. I decided to use InfluxDB because of the ease of implementing timeseries views, and so for a later version I can create a dashboard using Grafana.

>Additional Libraries
- InfluxDbClient.h
- InfluxDbCloud.h
