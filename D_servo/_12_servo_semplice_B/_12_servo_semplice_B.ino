// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
int servopin = 9; 
 
 
void setup() 
{ 
  myservo.attach(servopin);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{ 
  
  for(pos = 0; pos < 180; pos += 1)  
  {                                  
      myservo.write(pos);               
      delay(10);                       
  } 
  
  for(pos = 180; pos>=1; pos-=1)      
  {                                
      myservo.write(pos);              
      delay(10);                        
  } 
  
} 
