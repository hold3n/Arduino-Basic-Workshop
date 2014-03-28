/**
 * Simple Write. 
 * 
 * Check if the mouse is over a rectangle and writes the status to the serial port. 
 * This example works with the Wiring / Arduino program that follows below.
 */


import processing.serial.*;

Serial myPort;  // Create object from Serial class
int val;        // Data received from the serial port

void setup() 
{
  frameRate(30);
  size(200, 200);   // imposta la finestra

  String portName = Serial.list()[7];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  background(255);
  if (mouseOverRect() == true) {  // Se il mouse è dentro il box
    fill(204);                    // cambia colore del box
    myPort.write('H');            // invia il carattere H sulla porta seriale
  } 
  else {                          // Se il mouse non è dentro il box
    fill(0);                      // cambia colore del box
    myPort.write('L');            // invia il carattere L sulla porta seriale
  }
  rect(50, 50, 100, 100);         // Disegna il quadrato
}

boolean mouseOverRect() { // Verifica se il mouse è dentro il box
  return ((mouseX >= 50) && (mouseX <= 150) && (mouseY >= 50) && (mouseY <= 150));
}


