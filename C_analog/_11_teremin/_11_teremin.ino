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

int PIEZO = 8;	  // Diamo un nome al PIN 8
int FOTO = A0;     // Diamo un nome al PIN A0;

int valore = 0;   // Definiamo una variabile che useremo 
                  // per il valore del potenzionetro
                  
int valoreNormalizzato = 0;  // definiamo una variabile dove metteremo il risultato
                             // di VALORE una volta normalizzato



void setup() {                
  pinMode(PIEZO, OUTPUT);		// Dico ad A. che il PIN 9 funziona come OUTPUT
  pinMode(FOTO, INPUT);          // Dico ad A. che il PIN A0 funziona come INPUT 

  Serial.begin(9600);          // Apro la porta seriale per inviare dati al computer
                               // alla velocità di 9600 bit al secondo
}



void loop() {
  valore = analogRead(FOTO);    // Questo valore può andare da 0 a 1023
                                // ho bisogno di portarlo in una scala da 31 a 4978
                                // questi sono i valori in cui sono compresi toni e semitoni
                                // gestiti da arduino.
                               
   
  valoreNormalizzato = map(valore, 15, 60, 31, 4978);
  valoreNormalizzato = constrain(valoreNormalizzato, 31, 4978);
  valoreNormalizzato = 4978 - valoreNormalizzato;
  
  tone(PIEZO, valoreNormalizzato, 5);   // Non tutti i valori corrispondono a delle note
                                        // ma al momento ci interessa l'effetto teremin
                                        // piuttosto che un codice perfetto
  
  Serial.print(valore);                
  Serial.print(" -- > ");
  Serial.println(valoreNormalizzato);
  
  delay(5);                   
  
}
