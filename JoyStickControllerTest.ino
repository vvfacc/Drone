#include <RF24.h>
#include <nRF24L01.h>
#include <SPI.h>

#define LED 12
#define X_AXIS_PIN A0 //Pin A0 to Xaxis
#define Y_AXIS_PIN A1
#define SW_PIN A2

//RF24 radio(7, 8);
void setup() {
  // put your setup code here, to run once:
  pinMode(SW_PIN, INPUT);
  digitalWrite(SW_PIN, HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_AXIS_PIN));
  Serial.print("\t");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Y_AXIS_PIN));
  Serial.print("\t");
  Serial.print("Switch: ");
  Serial.println(digitalRead(SW_PIN));
  delay(50);
}
