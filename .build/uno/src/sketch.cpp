#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"
int mostureSensor = 0;

void setup() {
  pinMode (2,OUTPUT);//attach pin 2 to vcc
  pinMode (5,OUTPUT);//attach pin 5 to GND
  // initialize serial communication:
  Serial.begin(9600);
}

void loop()
{

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  // pinMode (4, INPUT);//attach pin 4 to Echo
  // duration = pulseIn(4, HIGH);

//   // read the input on analog pin 0:
  int sensorValue = analogRead(mostureSensor);
//   // print out the value you read:
 if (sensorValue >= 500)
 {
  digitalWrite(2, HIGH);
}
else
 {
  digitalWrite(2, LOW);
 }


  Serial.println();
  Serial.println(sensorValue);

  delay(400);
}


// */
// int led1 = 2;
// int led2 = 3;
// int led3 = 4;
// int led4 = 5;
// int led5 = 6;


// void setup() {
//   // Serial Begin so we can see the data from the mosture sensor in our serial input window.
//   Serial.begin(9600);
//   // setting the led pins to outputs
//   pinMode(led1, OUTPUT);
//   pinMode(led2, OUTPUT);
//   pinMode(led3, OUTPUT);
//   pinMode(led4, OUTPUT);
//   pinMode(led5, OUTPUT);
// }

// // the loop routine runs over and over again forever:
// void loop() {

//  if (sensorValue >= 820)
//  {
//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, HIGH);
//  digitalWrite(led3, HIGH);
//  digitalWrite(led4, HIGH);
//  digitalWrite(led5, LOW);
// }
// else if (sensorValue >= 615  && sensorValue < 820)
//  {
//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, HIGH);
//  digitalWrite(led3, HIGH);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
// }
// else if (sensorValue >= 410 && sensorValue < 615)
//  {
//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, HIGH);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
// }
// else if (sensorValue >= 250 && sensorValue < 410)
//  {
//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
// }
// else if (sensorValue >= 0 && sensorValue < 250)
//  {
//  digitalWrite(led1, LOW);
//  digitalWrite(led2, LOW);
//  digitalWrite(led3, LOW);
//  digitalWrite(led4, LOW);
//  digitalWrite(led5, LOW);
// }
//   delay(1000);        // delay 1 second between reads
// }
