#include "HandlerManager.h"

HandlerManager::HandlerManager(BtnManager *btn) : handlers { &timer } {
	for (unsigned int i = 0; i < sizeof(handlers)/sizeof(handlers[0]); i++) {
		handlers[i] -> setupBtns(btn);
	}
	handler = handlers[0];
}

void HandlerManager::tick(UIManager *ui, AlarmManager *alarm) {
	handler -> tick(ui, alarm);
}
