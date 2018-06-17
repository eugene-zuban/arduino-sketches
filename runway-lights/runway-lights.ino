const int YELLOW_LED = 11;
const int RED_LED = 10;
const int GREEN_LED = 9;
const int BLUE_LED = 6;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

void lightLoop(int pinId, int maxPower, int waitTime) {
  analogWrite(pinId, maxPower);
  delay(waitTime);
  analogWrite(pinId, 0);
}

// the loop function runs over and over again forever
void loop() {
  int waitTime = 400;
  int maxPower = 200;
  
  int colorPins[4];
  colorPins[0] = YELLOW_LED;
  colorPins[1] = RED_LED;
  colorPins[2] = GREEN_LED;
  colorPins[3] = BLUE_LED;

  for (int i = 0; i < 4; i++) {
    lightLoop(colorPins[i], maxPower, waitTime);
  }
}


