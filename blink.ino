int blinkPin = 4 ;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    blinkPin = random(5);
    digitalWrite(blinkPin, HIGH);   // turn a "random" LED on
    blinkPin = random(5);
    digitalWrite(blinkPin, LOW);    // turn a "random" LED off
    delay(50);                      // wait
}
