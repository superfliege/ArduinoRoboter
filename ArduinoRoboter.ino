#include <Servo.h>

/*
   ArduinoRoboter.ino Main File
   Defines a few values, setup and loop function
   
   @Author Fabrice

*/


#define BRAKE_A 9
#define BRAKE_B 8
#define DIR_A 12
#define DIR_B 13
#define PWM_A 3
#define PWM_B 11
#define FULL_SPEED 255

#define SERVO_LEFT 45
#define SERVO_MIDDLE 95
#define SERVO_RIGHT 180

#define TURN_SPEED 90
#define SERVO_DELAY 15

#define RIGHT HIGH;
#define LEFT LOW;

#define IR_SENSOR 2

Servo SensorServo;
byte servoPosition = SERVO_MIDDLE;
boolean servoRichtung = RIGHT;
int sensorValue = 0; 

void setup() 
{
  
  //Setup Channel A
  pinMode(DIR_A, OUTPUT); //Initiates Motor Channel A pin
  pinMode(BRAKE_A, OUTPUT); //Initiates Brake Channel A pin

  //Setup Channel B
  pinMode(DIR_B, OUTPUT); //Initiates Motor Channel B pin
  pinMode(BRAKE_B, OUTPUT);  //Initiates Brake Channel B pin
  
}

//Just a simple test, other controls are not implementet yet.. sorry:(
void loop()
{

  
  //Motor A forward @ full speed
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 255);   //Spins the motor on Channel A at full speed

  //Motor B backward @ half speed
  digitalWrite(13, LOW);  //Establishes backward direction of Channel B
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  analogWrite(11, 123);    //Spins the motor on Channel B at half speed
  
  delay(3000);

  
  digitalWrite(9, HIGH);  //Engage the Brake for Channel A
  digitalWrite(9, HIGH);  //Engage the Brake for Channel B


  delay(1000);
  
  
  //Motor A forward @ full speed
  digitalWrite(12, LOW);  //Establishes backward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 123);    //Spins the motor on Channel A at half speed
  
  //Motor B forward @ full speed
  digitalWrite(13, HIGH); //Establishes forward direction of Channel B
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  analogWrite(11, 255);   //Spins the motor on Channel B at full speed
  
  
  delay(3000);
  
  
  digitalWrite(9, HIGH);  //Engage the Brake for Channel A
  digitalWrite(9, HIGH);  //Engage the Brake for Channel B
  
  
  delay(1000);
  
}

