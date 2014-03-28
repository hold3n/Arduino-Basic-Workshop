/*
 *  Motore DC pilotato con transistor + PWM
 *  
 *  Il motore gira a una velocità proporzionale alla
 *  lettura del potenziometro
 *  
 *  Collegamenti:
 *  PIN Analogico 0 - potenziometro
 *  PIN 9 - transistor pilota
 *
 *  Istruzioni dettagliate sul sito
 *  http://glgprograms.tk/?p=elet/motoridc
 */

int potenziometro = A0;     // potenziometro
int motore = 9;      // motore

void setup() {
  // inizializza il motore come output
  pinMode(motore, OUTPUT);
  pinMode(potenziometro, INPUT);
  Serial.begin(9600);  
}

void loop(){
  byte valore = map(analogRead(potenziometro),0,1023,0,255);
  Serial.println(valore);
  // il motore gira con velocità proporzionale alla rotazione del potenziometro
  analogWrite(motore,valore);
}


