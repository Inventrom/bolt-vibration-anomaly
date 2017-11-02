/* Vibration Sensor (SW-420) Bolt example for sending commands to Bolt IoT cloud
 * https://www.elecrow.com/vibration-sensor-module-sw420-p-525.html
 * Works with 5V 
*/

#define VIBE_PIN 8
#define NUM 10
#define LED_PIN 9

#define BOLT_CLOUD_COMMAND_PUSH_DATA  "RD\r"
#define BOLT_COMMAND_GET_DATA         "GVD"
 
unsigned long count_vibe = 0;
bool current_state = false;
String uart_data="";

void setup() {
  Serial.begin(9600);
  pinMode(VIBE_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
  digitalWrite(VIBE_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
//  Serial.println("Vibrations are good");
}

void loop() {
    if(current_state != digitalRead(VIBE_PIN)){
      count_vibe++;
      current_state = !current_state;
    }
         
  if(Serial.available()>0){
    char data = Serial.read();
    uart_data = uart_data+data;
    
//  Serial.println(uart_data);

    if((uart_data == BOLT_CLOUD_COMMAND_PUSH_DATA)||(uart_data==BOLT_COMMAND_GET_DATA)){
      uart_data="";
      Serial.print(count_vibe);
    }
    if(uart_data.length()>2){
        uart_data = uart_data.substring(uart_data.length()-2, uart_data.length());
    }
  }
}
