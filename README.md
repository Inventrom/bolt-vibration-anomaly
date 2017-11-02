Bolt Vibration Sensor Anomaly Detection
=======================================
Anomaly detection using z-score analysis using the Bolt IoT module and cloud platform with Node-RED and Arduino.

Pre-requisites:
--------------

Bolt IoT Cloud and Hardware Module:
https://cloud.boltiot.com/

Git and Github:
https://try.github.io/levels/1/challenges/1

Node-Red:
https://nodered.org/docs/getting-started/

Arduino IDE:
https://www.arduino.cc/en/main/software

Setup
-----
0. Connect the hardware
1. Clone repository
2. Open Arduino sketch
3. Compile and Flash Boltduino
4. Launch Node-RED editor
5. Copy Node-RED blocks into flow
6. Change Bolt API Key from Bolt cloud in "set_bolt_params" block
7. Change Bolt ID in "set_bolt_params" block
8. Change email ID in "email_alert" block 
9. Hit Deploy (the big red button in the top-left)
10. Create "Anomalies" and get alerts!
