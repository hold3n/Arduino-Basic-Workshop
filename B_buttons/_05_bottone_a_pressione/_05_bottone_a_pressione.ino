/*
  Button
 
  Accendiamo un led attraverso un bottone.
 Il led rimane acceso finché il bottone è premuto. 
 
 
 The circuit:
 * LED attached from pin 9 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 by DojoDave and Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

int led = 9;	         //Diamo un nome al PIN 9
int buttonPin = 2;       // Agganciamo un piedino del bottone al PIN 2

int buttonState = 0;    // Definiamo una variabile in cui memorizzeremo
                        // lo stato del bottone
                        // 0 = non premuto, 1 = premuto


void setup() {                
  pinMode(led, OUTPUT);	      // Dico ad A. che il PIN 9 funziona come OUTPUT
  pinMode(buttonPin, INPUT);  // Dico ad A. che il PIN 2 funziona come INPUT
}



void loop() {
  buttonState = digitalRead(buttonPin);  // 1. leggolo stato del bottone e lo memorizzo
                                         // nella variabile che abbiamo creato
                                         
                                          // 2. uso un costrutto decisionele
                                          // se il bottone è premuto, accende il led
                                          // altrimenti spegne il led
  if (buttonState == HIGH) {                 
    // turn LED on:    
    digitalWrite(led, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led, LOW); 
  }
 
}
