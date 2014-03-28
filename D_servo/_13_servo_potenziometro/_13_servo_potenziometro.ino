// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  		// create servo object to control a servo 
 
int potpin = A0;        // analog pin used to connect the potentiometer
int posizione;          // variable to read the value from the analog pin 
 
void setup() 
{ 
  pinMode(potpin, INPUT);
  myservo.attach(9);  		// attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  posizione = analogRead(potpin);            		// Leggo il valore del potenziometro 
  posizione = map(posizione, 0, 1023, 0, 179);		// Riduco la gamma di valori a 180 
  myservo.write(posizione);                  		// Scrivo la posizione sul servo 
  delay(15);                          
}
