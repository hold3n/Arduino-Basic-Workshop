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

int led = 9;	           //Diamo un nome al PIN 9
int buttonPin = 2;       // Agganciamo un piedino del bottone al PIN 2

int buttonState = 0;      // Dove conserviamo lo stato del bottone
int old_buttonState = 0;  // Dove memorizzo lo stato precedente del bottone

int ledState = 0;       // Dove conserviamo lo stato del led


void setup() {                
  pinMode(led, OUTPUT);	      // Dico ad A. che il PIN 9 funziona come OUTPUT
  pinMode(buttonPin, INPUT);  // Dico ad A. che il PIN 2 funziona come INPUT
}



void loop() {
  buttonState = digitalRead(buttonPin);   // 1. leggolo stato del bottone e lo memorizzo
                                          // nella variabile che abbiamo creato
                                         
                                          // 2. controllo che il bottone sia premuto
                                          // se lo è modifico lo stato del LED.
  
  if (buttonState == HIGH && old_buttonState == LOW){  // Effettuo un debouncing
    ledState = !ledState;                              // attraverso lo stato del bottone
    delay(15);                                         // e un leggero ritardo in ms
 }
  
  old_buttonState = buttonState;
  
                                          
  if (ledState == HIGH) {             
    // turn LED on:    
    digitalWrite(led, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(led, LOW); 
  }
 
}
