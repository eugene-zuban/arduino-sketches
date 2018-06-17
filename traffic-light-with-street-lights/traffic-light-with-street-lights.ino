const int GREEN_LED = 3;
const int YELLOW_LED = 5;
const int RED_LED = 6;
const int WHITE_LED_1 = 9;
const int WHITE_LED_2 = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(WHITE_LED_1, OUTPUT);
  pinMode(WHITE_LED_2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  turnOnTheLights();
  
  greenLight();
  delay(16000);

  yellowLight();
  delay(3000);

  redLight();
  delay(16000);
}

void turnOnTheLights() {
  analogWrite(WHITE_LED_1, 250);
  analogWrite(WHITE_LED_2, 250);
}

void greenLight() {
  analogWrite(RED_LED, 0);
  analogWrite(YELLOW_LED, 0);
  analogWrite(GREEN_LED, 100);
}

void yellowLight() {
  analogWrite(RED_LED, 0);
  analogWrite(YELLOW_LED, 250);
  analogWrite(GREEN_LED, 0);
}

void redLight() {
  analogWrite(RED_LED, 250);
  analogWrite(YELLOW_LED, 0);
  analogWrite(GREEN_LED, 0); 
}
