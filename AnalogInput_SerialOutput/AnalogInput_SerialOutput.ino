/*
  IR Analog input, serial output to Touch
*/

const int analogInPin0 = A0;  // Analog input pin
//const int analogInPin1 = A1;  // Analog input pin
//const int analogInPin2 = A2;  // Analog input pin
//const int analogInPin3 = A3;  // Analog input pin
//const int analogInPin4 = A4;  // Analog input pin 
//const int analogInPin5 = A5;  // Analog input pin

int sensorValue0 = 0;        // value read from the IR
//int sensorValue1 = 0;        // value read from the IR
//int sensorValue2 = 0;        // value read from the IR
//int sensorValue3 = 0;        // value read from the IR
//int sensorValue4 = 0;        // value read from the IR
//int sensorValue5 = 0;        // value read from the IR

void setup() {

  Serial.begin(9600);
}

void loop() {
  sensorValue0 = analogRead(analogInPin0);
  //sensorValue1 = analogRead(analogInPin1);
    //sensorValue2 = analogRead(analogInPin2);
      //sensorValue3 = analogRead(analogInPin3);
        //sensorValue4 = analogRead(analogInPin4);
         //sensorValue5 = analogRead(analogInPin5);

         

  Serial.println(sensorValue0);
// Serial.print(",");
//  Serial.print(sensorValue1);
//  Serial.print(",");
//  Serial.print(sensorValue2);
 // Serial.print(",");
 // Serial.print(sensorValue3);
 // Serial.print(",");
 // Serial.print(sensorValue4);
 // Serial.print(",");
 //Serial.println(sensorValue5);

  //delay(200);
}
