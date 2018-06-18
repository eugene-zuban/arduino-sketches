const int RED_LED = 9;
const int BLUE_LED = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 10; i++) {
    redLight();
    delay(500);
    blueLight();
    delay(500);
  }

  for (int i = 0; i < 7; i++) {
    bothLights();
    delay(250);
  }
}

void redLight() {
    analogWrite(RED_LED, 200);
    delay(50);
    analogWrite(BLUE_LED, 0);
}

void blueLight() {
    analogWrite(BLUE_LED, 200);
    delay(50);
    analogWrite(RED_LED, 0);
}

void bothLights() {
  analogWrite(RED_LED, 200);
  analogWrite(BLUE_LED, 200);
  delay(250);
  analogWrite(RED_LED, 0);
  analogWrite(BLUE_LED, 0);
}



