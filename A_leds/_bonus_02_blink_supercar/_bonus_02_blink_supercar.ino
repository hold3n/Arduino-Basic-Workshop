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
 
 
int myPins[] = {0, 0, 0, 0, 11, 10, 9, 6, 0, 0, 0, 0};  // Array con valori cuscinetto ai lati
int ritardo = 20;                                       // Uso il ritardo come variabile


void setup() {                

  for(int i = 4; i < 8; i++){     // Inizializza l'array con un ciclo for
     pinMode(myPins[i], OUTPUT); 
  }

}

void loop() {      
  
 //
 for(int i = 3; i < 9; i++){      // Uso un ciclo for per creare una onda
   analogWrite(myPins[i], 250);   // di valori sull'array di pin
   delay(ritardo);
   analogWrite(myPins[i-1], 50);
   delay(ritardo);
   analogWrite(myPins[i-2], 0);
   delay(ritardo);
   analogWrite(myPins[i-3], 0);
   delay(ritardo); 
   
 }
 
 
 for(int i = 8; i >= 3; i--){
   analogWrite(myPins[i], 250);
   delay(ritardo);
   analogWrite(myPins[i+1], 50);
   delay(ritardo);
   analogWrite(myPins[i+2], 0);
   delay(ritardo);
   analogWrite(myPins[i+3], 0);
   delay(ritardo);
 }
 
}
