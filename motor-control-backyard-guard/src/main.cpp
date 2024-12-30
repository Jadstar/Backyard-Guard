#include <Arduino.h>
#include <Servo.h>

#define PITCH_PIN 9
#define YAW_PIN 8

/*  Boundary Box definition
      x1___________x2
      |          |
      |          |
      |          |
      x3          x4
------------
*/
struct boundaryBox{
  float x1;
  float x2;
  float x3;
  float x4;
};

void moveYaw(int deg);  // yaw max is 45, min is -45. stable is 0 


void movePitch(int deg);    // pitch max is 30, min is -30. stable is 0 

bool isBoundary(); 
boundaryBox getBoundaryBox();

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

  /*
    PROJECT GENERAL MECHANISM

    1. Check if boundary box exists
    2. If boundary box exists, check if the box is in the centre +- tolerance
    3. check difference in left and right/ up and down and move the necessary movement
    4. repeat
  */
  if (isBoundary()){

    

  }

}

void moveYaw(int deg){
/*
input deg is the real life amount needed to move left/right
*/


}

void movePitch(int deg){
/*
input deg is the real life amount needed to move up/down
*/

}