/*
 * SearchForObjects ino
 * is for controling the servo + ultrasonic sensor
 * 
 * @Author Fabrice
 */


#define SERVO_WAITING_TIME 200
#define TOO_CLOSE_DISTANCE 500

/*
 * i_direction from 0 Left - 100 Right controls servoPost
 * has to be tuned up by try and error
 */
bool searchForObjects(int i_direction)
{
  
  SensorServo.write(i_direction * (SERVO_RIGHT / 100));
  delay(SERVO_WAITING_TIME);
  sensorValue = analogRead(IR_SENSOR);
  
  if(sensorValue >= TOO_CLOSE_DISTANCE)
  {
    return false;
  }
  
  return true;
}



