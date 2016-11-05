/*
 * SearchForObjects ino
 * is for controling the servo + ultrasonic sensor
 * 
 * @Author Fabrice
 */


#define SERVO_WAITING_TIME 300
#define TOO_CLOSE_DISTANCE 15

/*
 * i_direction from 0 Left - 100 Right controls servoPost
 * has to be tuned up by try and error
 */
bool searchForObjects(int i_direction)
{
  bool b_foundObject = false;
   long i_sensorValue = 0;
  SensorServo.write(i_direction);
  delay(SERVO_WAITING_TIME);
  i_sensorValue = getDistance();
  Serial.println(i_sensorValue);
  if(i_sensorValue < TOO_CLOSE_DISTANCE)
  {
    b_foundObject = true;
  }
  return b_foundObject;
}

long getDistance()
{
  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration, inches, cm;

  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  //Serial.print(inches);
  //Serial.print("in, ");
  //Serial.println(cm);
  //Serial.print("cm");
  //Serial.println();
  
  delay(100);

  return cm;
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}



