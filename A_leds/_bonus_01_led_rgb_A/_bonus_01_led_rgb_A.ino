_bonus_01_bonus_01/*
  Mostra i tre colori primari ripetutamente
*/

// Assegno il numero di PIN ai led che userò
// Assegno un nome di variabile che mi ricordi il colore su cui agisco
int RED_LED_PIN = 11;
int GREEN_LED_PIN = 10;
int BLUE_LED_PIN = 9;


// Creo delle variabili in cui memorizzo il valore del singolo colore
// Questo valore varierà da 0 a 255
int redIntensity = 255;
int greenIntensity = 255;
int blueIntensity = 255;

// Definisco una variabile con il tempo di delay
// In questa maniera posso fare delle prove senza cambiare il valore
// in ogni punto del codice
int DISPLAY_TIME = 1000;


void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {

  analogWrite(RED_LED_PIN, redIntensity);
  analogWrite(GREEN_LED_PIN, 0);
  analogWrite(BLUE_LED_PIN, 0);
  delay(DISPLAY_TIME);
  
  analogWrite(GREEN_LED_PIN, greenIntensity);
  analogWrite(RED_LED_PIN, 0);
  analogWrite(BLUE_LED_PIN, 0);
  delay(DISPLAY_TIME);
  
  analogWrite(BLUE_LED_PIN, blueIntensity);
  analogWrite(RED_LED_PIN, 0);
  analogWrite(GREEN_LED_PIN, 0);
  delay(DISPLAY_TIME);
}
