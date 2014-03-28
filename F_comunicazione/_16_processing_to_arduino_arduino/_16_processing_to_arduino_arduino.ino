 /**
 * Simple Write. 
 * 
 * Check if the mouse is over a rectangle and writes the status to the serial port. 
 * This example works with the Wiring / Arduino program that follows below.
 */ 
 
 // Wiring/Arduino code:
 // Read data from the serial and turn ON or OFF a light depending on the value
 
 char val;        // Data received from the serial port
 int ledPin = 9;  // Set the pin to digital I/O 4
 
 void setup() {
   pinMode(ledPin, OUTPUT);   // Inizializzo il pin 9 come output
   Serial.begin(9600);        // Inizializzo la porta seriale
 }
 
 void loop() {
   if (Serial.available()) {  // Controllo che la porta sia disponibile
     val = Serial.read();     // poi leggo il valore in byte, un carattere alla volta
   }
   
   if (val == 'H') {              // Se il valore è H
     digitalWrite(ledPin, HIGH);  // accende il LED
   } else {                       // Se il valore è un altro
     digitalWrite(ledPin, LOW);   // spegne il LED
   }
   
   delay(30);   // Aspetta prima di leggere di nuovo
 }
