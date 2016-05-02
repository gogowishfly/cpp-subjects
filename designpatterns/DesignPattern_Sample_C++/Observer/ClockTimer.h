#ifndef	_OBSERVER_CLOCKTIMER_H_
#define _OBSERVER_CLOCKTIMER_H_

#include "Subject.h"

namespace Observer
{
class ClockTimer : public Subject
{
public:
	ClockTimer() { _strtime(tmpbuf); };
	~ClockTimer() {};

	int GetHour();
	int GetMinute();
	int GetSecond();
	void Tick();

private:
	char tmpbuf[128];
};

} // namespace Observer




#endif