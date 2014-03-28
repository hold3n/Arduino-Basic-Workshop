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

int LED = 9;	  // Diamo un nome al PIN 9
int POT = A0;     // Diamo un nome al PIN A0;

int valore = 0;   // Definiamo una variabile che useremo 
                  // per il valore del potenzionetro
                  
int valoreNormalizzato = 0;  // definiamo una variabile dove metteremo il risultato
                             // di VALORE una volta normalizzato



void setup() {                
  pinMode(LED, OUTPUT);		// Dico ad A. che il PIN 9 funziona come OUTPUT
  pinMode(POT, INPUT);          // Dico ad A. che il PIN A0 funziona come INPUT 
}



void loop() {
  valore = analogRead(POT);    // Questo valore può andare da 0 a 1023
                               // ho bisogno di portarlo in una scala da 0 a 255
                               
  valoreNormalizzato = map(valore, 0, 1023, 0, 255);
  analogWrite(LED, valoreNormalizzato);
  
  
}
