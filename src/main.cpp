#include <Arduino.h>
int value=0;
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(A0, OUTPUT);
}

void loop() {
// write your code here
    value=analogRead(A0);
    Serial.println(value);
    delay(500);
}