
void turnLeft()
{
     //Motor A forward @ turn speed
  digitalWrite(DIR_A, LOW); 
  digitalWrite(BRAKE_A, LOW);   
  analogWrite(PWM_A, TURN_SPEED); 

  //Motor B backward @ turn speed
  digitalWrite(DIR_B, HIGH); 
  digitalWrite(BRAKE_B, LOW);  
  analogWrite(PWM_B, TURN_SPEED);    
  delay(500);
  digitalWrite(BRAKE_A, HIGH);   
  digitalWrite(BRAKE_B, HIGH);
}


void turnRight()
{
   //Motor A backward @ turn speed
  digitalWrite(DIR_A, HIGH); 
  digitalWrite(BRAKE_A, LOW);   
  analogWrite(PWM_A, TURN_SPEED);   

  //Motor B forward @ turn speed
  digitalWrite(DIR_B, LOW); 
  digitalWrite(BRAKE_B, LOW);
  analogWrite(PWM_B,TURN_SPEED);    
  delay(500);
  digitalWrite(BRAKE_A, HIGH);
  digitalWrite(BRAKE_B, HIGH);
}


void turn()
{
   //Motor A backward @ calulated speed
  digitalWrite(DIR_A, HIGH);
  digitalWrite(BRAKE_A, LOW);   
  analogWrite(PWM_A, TURN_SPEED);  
  
  //Motor B backward @ calulated speed
  digitalWrite(DIR_B, LOW);  
  digitalWrite(BRAKE_B, LOW);   
  analogWrite(PWM_B, TURN_SPEED);   
    delay(1500);
  digitalWrite(BRAKE_A, HIGH);
  digitalWrite(BRAKE_B, HIGH);
}

