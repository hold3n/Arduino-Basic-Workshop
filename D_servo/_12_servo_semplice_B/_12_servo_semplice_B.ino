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
  for(posizione = 180; posizione>=1; posizionepos-=1)      
  {                                
      myservo.write(pos);              
      delay(10);                        
  } 
  
  for(posizione = 0; posizione < 180; posizione += 1)  
  {                                  
      myservo.write(pos);               
      delay(10);                       
  } 
  
} 
