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
  cross();
  delay(15000);

  doNotCross();
  delay(15000);
}

void cross() {
  analogWrite(WHITE_LED_1, 200);
  analogWrite(WHITE_LED_2, 200);
  analogWrite(RED_LED_1, 0);
  analogWrite(RED_LED_2, 0);
}

void doNotCross() {
  analogWrite(WHITE_LED_1, 0);
  analogWrite(WHITE_LED_2, 0);
  analogWrite(RED_LED_1, 200);
  analogWrite(RED_LED_2, 200);
}
