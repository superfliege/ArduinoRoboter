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

#define SERVO_RIGHT 45
#define SERVO_MIDDLE 95
#define SERVO_LEFT 120

#define TURN_SPEED 90
#define SERVO_DELAY 200

#define RIGHT HIGH;
#define LEFT LOW;
#define IR_SENSOR 2
const int trigPin = 2;
const int echoPin = 4;
#define SERVO_PIN 5

Servo SensorServo;
byte servoPosition = SERVO_MIDDLE;
boolean servoRichtung = RIGHT;
int sensorValue = 0; 

void setup() 
{
  Serial.begin(9600); 
  //Setup Channel A
  pinMode(DIR_A, OUTPUT); //Initiates Motor Channel A pin
  pinMode(BRAKE_A, OUTPUT); //Initiates Brake Channel A pin

  //Setup Channel B
  pinMode(DIR_B, OUTPUT); //Initiates Motor Channel B pin
  pinMode(BRAKE_B, OUTPUT);  //Initiates Brake Channel B pin
  
  pinMode(IR_SENSOR, INPUT);
  SensorServo.attach(SERVO_PIN);
}

//Just a simple test, other controls are not implementet yet.. sorry:(
void loop()
{
  simpleDriveMode();
}

