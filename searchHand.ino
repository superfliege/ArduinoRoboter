int searchHand()
{
  int handPosition = 0;

  digitalWrite(BREAK_A, HIGH);
  digitalWrite(BREAK_B, HIGH);

  SensorServo.write(SERVO_RIGHT);
  do
  {
    for(int servoPosition = SERVO_RIGHT; servoPosition >= SERVO_LEFT; servoPosition--)
    {
      SensorServo.write(servoPosition);
      delay(10);
      sensorValue = analogRead(IR_SENSOR);

      if(sensorValue >= HAND_DISTANCE)
      {
        handPosition = servoPosition;
        return handPosition;
      }
      
      for(int servoPosition = SERVO_LEFT; servoPosition >= SERVO_RIGHT; servoPosition++)
    {
      SensorServo.write(servoPosition);
      delay(10);
      sensorValue = analogRead(IR_SENSOR);

      if(sensorValue >= HAND_DISTANCE)
      {
        handPosition = servoPosition;
        return handPosition;
      }
      
      
    }
    }(while(sensorValue < HAND_DISTANCE);
  }

  
}

