/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

/*
  Questo è un commento su più righe.
  Tutto il testo inserito fra questi due comandi, viene completamente
  Ignorato da Arduino.
 */

int led = 9;	//Diamo un nome al PIN 9

/*
  Setup e Loop sono le funzioni principali di Arduino
  Dentro setup imposto tutte le condizioni iniziali che vanno
  impostate una volta Sola.
 */


void setup() {                
  pinMode(led, OUTPUT);		//Dico ad A. che il PIN 13 funziona come OUTPUT    
}

/*
  La funzione loop è il luogo in cui inserisco tutte le istruzioni
  che arduino deve eseguire. Le istruzioni vengono eseguite dalla cima al fondo
  e poi vengono ripetute di nuovo, all'infinito.
 */

void loop() {
  digitalWrite(led, HIGH);	// Accende il led al PIN 9
  delay(1000);              // Aspetta 1 secondo
  digitalWrite(led, LOW);   // Spegne il led al PIN 9
  delay(1000);              // Aspetta un secondo
}
