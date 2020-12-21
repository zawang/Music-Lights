#include <SPI.h> // Not actually used but needed to compile

int amplitude;

void setup()
{
    Serial.begin(9600);    // Debugging only
    pinMode(A0, INPUT);
    amplitude = 0;
}

void loop()
{
    amplitude = analogRead(A0);
    amplitude = amplitude * 8;
    String msg_str = String(amplitude);
    Serial.println(msg_str);
    //delay(1000);
}