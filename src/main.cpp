#include <Arduino.h>

// put function declarations here:
void blink5();
void blink21();

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.printf("Hello World! %d\n", 182);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  blink5();
  for (int i = 0; i < 2; i++)
  {
    blink21();
    delay(500);
  }
}

// put function definitions here:
// on is low, off is high
void blink5()
{
  static bool ledState = LOW;
  digitalWrite(5, ledState);
  ledState = !ledState;
}

// on is HIGH, off is LOW
void blink21()
{
  static bool ledState = HIGH;
  digitalWrite(21, ledState);
  ledState = !ledState;
}