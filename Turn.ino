
void turnLeft()
{
     //Motor A forward @ turn speed
  digitalWrite(DIR_A, LOW); 
  digitalWrite(BREAK_A, LOW);   
  analogWrite(PWM_A, TURN_SPEED)); 

  //Motor B backward @ turn speed
  digitalWrite(DIR_B, HIGH); 
  digitalWrite(BREAK_B, LOW);  
  analogWrite(PWM_B, TURN_SPEED);    
  delay(500);
  digitalWrite(BREAK_A, HIGH);   
  digitalWrite(BREAK_B, HIGH);B
}


void turnRight()
{
   //Motor A backward @ turn speed
  digitalWrite(DIR_A, HIGH); 
  digitalWrite(BREAK, LOW);   
  analogWrite(PWM_A, TURN_SPEED);   

  //Motor B forward @ turn speed
  digitalWrite(DIR_B, LOW); 
  digitalWrite(BREAK, LOW);
  analogWrite(PWM_B,TURN_SPEED);    
  delay(500);
  digitalWrite(BREAK_A, HIGH);
  digitalWrite(BREAK_B, HIGH);
}


void turn()
{
   //Motor A backward @ calulated speed
  digitalWrite(DIR_A, HIGH);
  digitalWrite(BREAK_A, LOW);   
  analogWrite(PWM_A, TURN_SPEED);  
  
  //Motor B backward @ calulated speed
  digitalWrite(DIR_B, LOW);  
  digitalWrite(BREAK_B, LOW);   
  analogWrite(PWM_B, TURN_SPEED);   
    delay(1500);
  digitalWrite(BREAK_A, HIGH);
  digitalWrite(BREAK_B, HIGH);
}

