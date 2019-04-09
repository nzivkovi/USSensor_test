#include "US_Sensor.h"


//defines pins numbers
#define TRIG_PIN_0 22
#define ECHO_PIN_0 23
#define TRIG_PIN_1 24
#define ECHO_PIN_1 25
#define TRIG_PIN_2 26
#define ECHO_PIN_2 27
#define TRIG_PIN_3 28
#define ECHO_PIN_3 29
#define TRIG_PIN_4 30
#define ECHO_PIN_4 31

/*granica koliko želim ispisa u loopu, koristim ju u if petlji*/
#define MAX_VALUES 51

/*pomoćna varijabla da si ograničim broj ispisa u loopu*/
int tmp = 1; 

/* Instances */
Sensor* sensor_0 = new Sensor(TRIG_PIN_0, ECHO_PIN_0);
Sensor* sensor_1 = new Sensor(TRIG_PIN_1, ECHO_PIN_1);
Sensor* sensor_2 = new Sensor(TRIG_PIN_2, ECHO_PIN_2);
Sensor* sensor_3 = new Sensor(TRIG_PIN_3, ECHO_PIN_3);
Sensor* sensor_4 = new Sensor(TRIG_PIN_4, ECHO_PIN_4);
void setup() {
  Serial.begin(9600);
}

void loop() {
  /* Check for obstacles */
  if(tmp < MAX_VALUES || true){ 
    Serial.print(sensor_0->get_distance());
    Serial.print(" ");
    Serial.print(sensor_1->get_distance());
    Serial.print(" ");
    Serial.print(sensor_2->get_distance());
    Serial.print(" ");
    Serial.print(sensor_3->get_distance());
    Serial.print(" ");
    Serial.print(sensor_4->get_distance());
    Serial.println();
  }
  tmp += 1;
  /* Avoid reading before the new distance is sampled */
  delay(100);
}
