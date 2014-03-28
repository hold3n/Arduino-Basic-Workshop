/*
  Cycles through the colors of a RGB LED
  Written for SparkFun Arduino Inventor's Kit CIRC-RGB

*/

// Assegno il numero di PIN ai led che userò
// Assegno un nome di variabile che mi ricordi il colore su cui agisco
int RED_LED_PIN = 11;
int GREEN_LED_PIN = 10;
int BLUE_LED_PIN = 9;


// Creo delle variabili in cui memorizzo il valore del singolo colore
// Questo valore varierà da 0 a 255
int redIntensity = 0;
int greenIntensity = 0;
int blueIntensity = 0;

// Definisco una variabile con il tempo di delay
// In questa maniera posso fare delle prove senza cambiare il valore
// in ogni punto del codice
int DISPLAY_TIME = 100;


void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {
  // Primo ciclo dal ROSSO al VERDE
  // Il ciclo aumenta progressivamente il valore di verde e diminuisce quello di rosso
  
  for (greenIntensity = 0; greenIntensity <= 255; greenIntensity+=5) {
        redIntensity = 255-greenIntensity;
        analogWrite(GREEN_LED_PIN, greenIntensity);
        analogWrite(RED_LED_PIN, redIntensity);
        delay(DISPLAY_TIME);
  }

  // Secondo ciclo dal VERDE al BLU
  // Il ciclo aumenta progressivamente il valore di blu e diminuisce quello di verde
  
  for (blueIntensity = 0; blueIntensity <= 255; blueIntensity+=5) {
        greenIntensity = 255-blueIntensity;
        analogWrite(BLUE_LED_PIN, blueIntensity);
        analogWrite(GREEN_LED_PIN, greenIntensity);
        delay(DISPLAY_TIME);
  }

  // Terzo ciclo dal BLU di nuovo al ROSSO
  // Il ciclo aumenta progressivamente il valore di rosso e diminuisce quello di blu
  
  for (redIntensity = 0; redIntensity <= 255; redIntensity+=5) {
        blueIntensity = 255-redIntensity;
        analogWrite(RED_LED_PIN, redIntensity);
        analogWrite(BLUE_LED_PIN, blueIntensity);
        delay(DISPLAY_TIME);
  }
}
