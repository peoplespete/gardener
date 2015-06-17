int moisture_sensor0 = 0;
int moisture_sensor1 = 1;
int moisture_sensor2 = 2;
int moisture_sensor3 = 3;

int moisture_led0 = 2;
int moisture_led1 = 3;
int moisture_led2 = 4;
int moisture_led3 = 5;

void setup() {

  pinMode (moisture_led0,OUTPUT);
  pinMode (moisture_led1,OUTPUT);
  pinMode (moisture_led2,OUTPUT);
  pinMode (moisture_led3,OUTPUT);

  // initialize serial communication:
  Serial.begin(9600);
}

void loop()
{

  // take moisture readings
  int sensor_value0 = analogRead(moisture_sensor0);
  int sensor_value1 = analogRead(moisture_sensor1);
  int sensor_value2 = analogRead(moisture_sensor2);
  int sensor_value3 = analogRead(moisture_sensor3);

  // Sensor Value Rubric
  // =========================
  // BONE DRY IS 1021
  // WATER IS ~ 315
  // Moist soil is 650 ish

  // turn on leds if their cooresponding sensor is wet, turn off if dry
  sensor_value0 >= 500 ? digitalWrite(moisture_led0, LOW) : digitalWrite(moisture_led0, HIGH);
  sensor_value1 >= 500 ? digitalWrite(moisture_led1, LOW) : digitalWrite(moisture_led1, HIGH);
  sensor_value2 >= 500 ? digitalWrite(moisture_led2, LOW) : digitalWrite(moisture_led2, HIGH);
  sensor_value3 >= 500 ? digitalWrite(moisture_led3, LOW) : digitalWrite(moisture_led3, HIGH);

  // digitalWrite(moisture_led0, LOW);
  // digitalWrite(moisture_led1, LOW);
  delay(400);
  // digitalWrite(moisture_led0, HIGH);
  // digitalWrite(moisture_led1, HIGH);

}


















  // Serial.println();
  // Serial.println(sensorValue);
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
