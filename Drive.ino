/*
   Drive.ino File
   For control the redirection
   use different methods for your robot control programs

   @Author Fabrice

*/


const int i_correction = 0;
//todo try out robot and "try and error" correction value


/*
   i_speed is for controling speed in percentage (0-100)
   i_turn is for controlling turning in percentage 0-100
*/
void driveLeft(int i_speed, int i_turn)
{
  //Motor A forward @ calulated speed
  digitalWrite(DIR_A, HIGH);
  digitalWrite(BRAKE_A, LOW);
  analogWrite(PWM_A, 255 * (i_speed / 100) + i_turn);   //Spins the motor on Channel A at calulated speed

  //Motor B forward @ calulated speed
  digitalWrite(DIR_B, LOW);
  digitalWrite(BRAKE_B, LOW);
  analogWrite(PWM_B, (255 * (i_speed / 100)) - i_turn);
}

/*
  i_speed is for controling speed in percentage (0-100)
  i_turn is for controling turningn in percanteage 0-100
*/
void driveRight(int i_speed, int i_turn)
{
  //Motor A forward @ calulated speed
  digitalWrite(DIR_A, HIGH);
  digitalWrite(BRAKE_A, LOW);
  analogWrite(PWM_A, 255 * (i_speed / 100) - i_turn);

  //Motor B forward @ calulated speed
  digitalWrite(DIR_B, HIGH);
  digitalWrite(BRAKE_B, LOW);
  analogWrite(PWM_B, (255 * (i_speed / 100)) + i_turn);
}

/*
  i_speed is for controling speed in percentage (0-100)

*/
void driveForward(int i_speed)
{


  //Motor A forward @ calulated speed
  digitalWrite(DIR_A, HIGH);
  digitalWrite(BRAKE_A, LOW);
  analogWrite(PWM_B, 255 * (i_speed / 100) + i_correction);

  //Motor B forward @ calulated speed
  digitalWrite(DIR_B, HIGH);
  digitalWrite(BRAKE_B, LOW);
  analogWrite(PWM_B, (255 * (i_speed / 100)) - i_correction);
}

/*
  i_speed is for controling speed in percentage (0-100)

*/
void driveBackward(int i_speed)
{

  
  //Motor A backward @ calulated speed
  digitalWrite(DIR_A, LOW);
  digitalWrite(BRAKE_A, LOW);
  analogWrite(PWM_A, 255 * (i_speed / 100) + i_correction);

  //Motor B backward @ calulated speed
  digitalWrite(DIR_B, LOW);
  digitalWrite(BRAKE_B, LOW);
  analogWrite(PWM_B, (255 * (i_speed / 100)) - i_correction);
}




