#include <Servo.h>

int AnalogRead = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);

  Serial.begin(9600);

}

void loop()
{
  AnalogRead = analogRead(A0);
  servo_9.write(map(AnalogRead, 0, 1023, 0, 360));
  Serial.println(AnalogRead);
  Serial.println(map(AnalogRead, 0, 1023, 0, 360));
  delay(10); // Atrase um pouco para melhorar o desempenho da simulação
}