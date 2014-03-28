/*
  FAB LAB FROSINONE
  OFFICINE GIARDINO
  
  W: officinegiardino.org
  M: info@officinegiardino.org

  CC 2014 Daniele Iori per Officine Giardino
  Quest'opera è distribuita con Licenza 
  Creative Commons Attribuzione - Condividi allo stesso modo 4.0 Internazionale.
  link: creativecommons.org/licenses/by-sa/4.0/
 

 */

int led = 9;	           //Diamo un nome al PIN 9
int buttonPin = 2;       // Agganciamo un piedino del bottone al PIN 2

int buttonState = 0;      // Dove conserviamo lo stato del bottone
int old_buttonState = 0;  // Dove memorizzo lo stato precedente del bottone

int ledState = 0;       // Dove conserviamo lo stato del led

int luminosita = 150;
int variazione = 5;

unsigned long starttime = 0;

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
    starttime = millis();                              // Memorizzo il tempo del momento in cui ho premuto il bottone
    
    delay(15);                                         
 }
  
  if ((buttonState == HIGH && old_buttonState == HIGH)){        // Verifico se il bottone è ancora premuto
    if (ledState == HIGH && (millis() - starttime) > 500){    // Verifico se è premuto da più di 500 secondi
      luminosita += variazione;                              // modifico la luminosità
      delay(30);
      
      if (luminosita < 5 || luminosita >250){                // inverto la variazione ai margini
        variazione = -variazione;
      }
      
    }
  }
  
  old_buttonState = buttonState;          
  
                                          
  if (ledState == HIGH) {             
    // turn LED on:    
    analogWrite(led, luminosita);  
  } 
  else {
    // turn LED off:
    digitalWrite(led, LOW); 
  }
 
}
