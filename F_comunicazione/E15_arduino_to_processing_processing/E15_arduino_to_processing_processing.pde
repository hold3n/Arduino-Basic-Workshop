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


import processing.serial.*;

Serial port;
String myString;
char lf = '\n';    // Linefeed in ASCII

float raggio = 30;

void setup(){
  frameRate(30);
  size(640, 480);    // size(x, y)
                     // imposta la finestra
                     // lo zero è in alto a sinistra
                     // la griglia è 0-639 e 0-479             
   
   smooth();          // antialias
   strokeWeight(1);   // Spessore della linea
   background(0);     // Colore di sfondo della finestra
   fill(0);           // Colore riempimento
   stroke(255);       // Colore del contorno
  
  
  //println(Serial.list());
  String portName = Serial.list()[3];         // memorizzo il nome della porta
  port = new Serial(this, portName, 9600);    // inizializzo la porta
  port.clear();                               // pulisco il buffer di memoria
}

void draw(){
  background(0);                              
  
  if (port.available() > 0) {
    myString = port.readStringUntil(lf);      //  leggo la stringa sulla porta seriale fino al carattere \n
    if (myString != null) {
      myString = trim(myString);                      // elimino gli spazi vuoti
      raggio = map(int(myString), 300, 900, 0, 255);  // faccio un mapping dei valori e li memorizzo
    }                                                 // in una variabile raggio
  }

  
  fill(raggio);                                       // modifico il riempimento del cerchio
  ellipse(width/2, height/2, raggio, raggio);         // e disegno il cerchio
                                                      // in base ai colori della foto resistenza
  println(raggio);
   
}






