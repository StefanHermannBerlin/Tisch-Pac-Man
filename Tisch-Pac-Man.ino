/*

Tisch Pac-Man

www.starthardware.org
www.arduino-tutorial.de

CC-BY-NC-SA
Stefan Hermann

*/


#include <Servo.h>

Servo myServo;

void setup() {
  Serial.begin(115200);
  pinMode(14, OUTPUT);
  myServo.attach(14);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  pinMode(10, OUTPUT);
  for (int repeats = 0; repeats < 5; repeats++) {
    myServo.write(30);
    for (int i = 200; i < 1200; i++) {
      tone(10, i, 100);
    }
    myServo.write(0);
    for (int i = 800; i > 200; i--) {
      tone(10, i, 100);
    }
    noTone(8);
  
  }
}

void loop() {
  delay(10);
}
