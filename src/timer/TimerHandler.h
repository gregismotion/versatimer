#ifndef TIMERHANDLER_H
#define TIMERHANDLER_H

#include "../../Handler.h"
#include "../../BtnHandler.h"

#include "TimerState.h"
#include "Timer.h"

#include "../../AlarmHandler.h"

class TimerHandler: public Handler {
	AlarmHandler alarm;

	void toggleState();
	void reset();

	public:
		TimerState state;
		Timer timer;
		
		void setupBtns(BtnHandler*);
		void tick();
};

#endif