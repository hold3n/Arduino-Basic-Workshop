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


int FOTO = A0;     // Diamo un nome al PIN A0;

int valore = 0;   // Definiamo una variabile 
                  // dove memorizziamo i valori dell fotoresistenza



void setup() {                
  pinMode(FOTO, INPUT);          // Dico ad A. che il PIN A0 funziona come INPUT 

  Serial.begin(9600);          // Apro la porta seriale per inviare dati al computer
                               // alla velocità di 9600 bit al secondo
}



void loop() {
  valore = analogRead(FOTO);    // Questo valore può andare da 0 a 1023

  Serial.println(valore);       // Invio alla porta seriale il valore della fotoresistenza
  delay(30);                  

}
