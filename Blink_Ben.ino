const int ledPin = 13;
const int timeUnit = 200;

void blinkDot() {
  digitalWrite(ledPin, HIGH);
  delay(timeUnit);
  digitalWrite(ledPin, LOW);
  delay(timeUnit);
}

void blinkDash() {
  digitalWrite(ledPin, HIGH);
  delay(3 * timeUnit);
  digitalWrite(ledPin, LOW);
  delay(timeUnit);
}

void letterGap() {
  delay(4 * timeUnit);
}

void wordGap() {
  delay(10 * timeUnit);
}

void blinkLetterB() {
  blinkDash();
  blinkDot();
  blinkDot();
  blinkDot();
}

void blinkLetterE() {
  blinkDot();
}

void blinkLetterN() {
  blinkDash();
  blinkDot();
}

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkLetterB();
  letterGap();
  blinkLetterE();
  letterGap();
  blinkLetterN();
  wordGap();
}