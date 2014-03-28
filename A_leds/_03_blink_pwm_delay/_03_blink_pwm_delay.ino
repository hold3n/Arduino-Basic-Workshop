/*
  FAB LAB FROSINONE
  OFFICINE GIARDINO
  
  W: officinegiardino.org
  M: info@officinegiardino.org

  CC 2014 Daniele Iori per Officine Giardino
  Quest'opera è distribuita con Licenza 
  Creative Commons Attribuzione - Condividi allo stesso modo 4.0 internazionale.
  link: creativecommons.org/licenses/by-sa/4.0/
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
  delay(1);              // Aspetta 1 secondo
  digitalWrite(led, LOW);   // Spegne il led al PIN 9
  delay(20);              // Aspetta un secondo
}
