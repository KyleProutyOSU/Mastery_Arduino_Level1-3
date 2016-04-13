#include <Servo.h>

int pin_joy=A0, pin_servo=9, pos=0, read_in=0;
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(pin_servo);
}

void loop() {

  moveServo();
  Serial.println(pos);
}

void moveServo()
{
  read_in = analogRead(pin_joy);
  pos = ((155.0/1023.0)*read_in+15); //equation(slope of line)
  servo.write(pos);
}
