#define SENSOR_PIN D4

#include <OneWire.h>
#include <DallasTemperature.h>
OneWire oneWire(SENSOR_PIN);
DallasTemperature tempSensor(&oneWire);

void setup() {

  Serial.begin(9600);
  tempSensor.begin();

}

void loop() {
  
  tempSensor.requestTemperatures(); 
  
  Serial.print("Celsius temperature: ");
  Serial.print(tempSensor.getTempCByIndex(0)); 
  
  Serial.print(" | Fahrenheit temperature: ");
  Serial.println(tempSensor.getTempFByIndex(0));

  delay(3000);
  
}