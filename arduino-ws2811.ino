void setup() {
  //The last two bits are TX(1) and RX(2)
  DDRD = B11111100;  // sets Arduino pins 3 to 7 as outputs, pin 0 and 1 as input
}

void loop() {
  PORTD = B10101000;// sets digital pin 3 to HIGH
  delayMicroseconds(50);
  PORTD = B00001000;// sets digital pin 3 to LOW
}
