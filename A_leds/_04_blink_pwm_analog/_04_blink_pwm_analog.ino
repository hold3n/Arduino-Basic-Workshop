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


// Inizializiamo le variabili
int LED = 9;

// Settiamo il pin 9 come pin di output
void setup(){
  pinMode(LED, OUTPUT);
}


//creiamo un ciclo
void loop(){
  
  for(int i = 0; i<255; i++){
    analogWrite(LED, i);    //attivo il pin 9 con un valore di pwm variabile
    delay(15);              //aggiungo un ritardo per vedere l'effetto
  }
  
  for(int i = 255; i>=0; i--){
    analogWrite(LED, i);    //attivo il pin 9 con un valore di pwm variabile
    delay(15);              //aggiungo un ritardo per vedere l'effetto
  }
  
  delay(1000);              //aggiungo un ritardo finale per simulare il respiro
}
