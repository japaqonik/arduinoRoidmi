/*
 * Timer.cpp
 *
 *  Created on: 13 lis 2018
 *      Author: epacrad
 */

#include "Timer.h"

Timer::Timer()
{
	// TODO Auto-generated constructor stub

}

void Timer::startTimer()
{
	startTimerStamp = millis();
	_isTimerStarted = true;
}

bool Timer::isTimerExpired()
{
	if (millis() - startTimerStamp > timerValue && _isTimerStarted)
	{
		resetTimer();
		return true;
	}
	return false;
}

void Timer::resetTimer()
{
	startTimerStamp = 0;
	_isTimerStarted = false;
}

bool Timer::isTimerStarted()
{
	return _isTimerStarted;
}

Timer::Timer(unsigned int timerLenghtInSeconds) :
		timerValue(timerLenghtInSeconds * 1000), startTimerStamp(0), _isTimerStarted(
				false)
{
}

Timer::~Timer()
{
	// TODO Auto-generated destructor stub
}

