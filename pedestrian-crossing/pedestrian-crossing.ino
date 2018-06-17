const int RED_LED_1 = 5;
const int RED_LED_2 = 10;
const int WHITE_LED_1 = 3;
const int WHITE_LED_2 = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(RED_LED_1, OUTPUT);
  pinMode(RED_LED_2, OUTPUT);
  pinMode(WHITE_LED_1, OUTPUT);
  pinMode(WHITE_LED_2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  doNotCross();
  delay(20000);

  cross();
  delay(10000);
}

void cross() {
  analogWrite(WHITE_LED_1, 200);
  analogWrite(WHITE_LED_2, 200);
  analogWrite(RED_LED_1, 0);
  analogWrite(RED_LED_2, 0);
}

void doNotCross() {
  blinkingRed(5);

  analogWrite(WHITE_LED_1, 0);
  analogWrite(WHITE_LED_2, 0);
  analogWrite(RED_LED_1, 200);
  analogWrite(RED_LED_2, 200);
}

void blinkingRed(int times) {
  for (int i = 0; i < times; i++) {
    analogWrite(RED_LED_1, 0);
    analogWrite(RED_LED_2, 0);
    delay(500);

    analogWrite(RED_LED_1, 200);
    analogWrite(RED_LED_2, 200);
    delay(500);
  }  
}
