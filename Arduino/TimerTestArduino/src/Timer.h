/*
 * Timer.h
 *
 *  Created on: 13 lis 2018
 *      Author: epacrad
 */

#ifndef SRC_TIMER_H_
#define SRC_TIMER_H_
#include "Arduino.h"

class Timer
{
private:
	Timer();
	unsigned long timerValue;
	unsigned long startTimerStamp;
	bool _isTimerStarted;
public:
	Timer(unsigned int timerLenghtInSeconds);
	bool isTimerStarted();
	bool isTimerExpired();
	void startTimer();
	void resetTimer();
	virtual ~Timer();
};

#endif /* SRC_TIMER_H_ */
