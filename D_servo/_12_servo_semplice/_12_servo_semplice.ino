// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 


#include <Servo.h> 	// Includiamo la libreria che ci permette di utilizzare il servo
 
Servo myservo;  	// Creo un oggetto servo, come fosse una variabile di un tipo nuovo. 

int posizione = 0;	// Creo una variabile dove memorizzare in gradi la posizione del servo 
 
void setup() 
{ 
  myservo.attach(9);  // collego il servo al pin 9


} 
 
void loop() 
{ 
	
       while(posizione < 180){
		 posizione ++;
		 myservo.write(posizione);    // scrivo la posizione del motorino  
		 delay(15); 
	 } 
  
        while(posizione > 0){		      // utilizzo un nuovo ciclo di controllo
		 posizione --;		      // ma potevo usare anche un for
		 myservo.write(posizione);    // scrivo la posizione del motorino 
		 delay(15); 
	 }
 
	 
} 
