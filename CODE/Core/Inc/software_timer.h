/*
 * software_timer.h
 *
 *  Created on: Dec 11, 2024
 *      Author: trung
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

void setTimer(int index, int value);
int isTimerExpired(int index);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
