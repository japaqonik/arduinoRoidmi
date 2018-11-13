// Do not remove the include below
#include "TimerTestArduino.h"

Timer timer(5);

void setup()
{
	pinMode(LED_PIN, OUTPUT);
	pinMode(IGNITE_PIN, INPUT);

	Serial.begin(9600);
}

void loop()
{
	if (digitalRead(IGNITE_PIN) == LOW) //ignite is ON
	{
		digitalWrite(LED_PIN, HIGH);
		timer.resetTimer();
		Serial.println("ignite ON LED always ON, Timer reseted");
	}
	else
	{
		if (timer.isTimerStarted())
		{
			Serial.println("ignite OFF, timer started");
			if (timer.isTimerExpired())
			{
				Serial.println("ignite OFF timer expired LED OFF");
				digitalWrite(LED_PIN, LOW);
			}
		}
		else
		{
			Serial.println("ignite OFF, timer not started, starting");
			timer.startTimer();
		}
	}
}
