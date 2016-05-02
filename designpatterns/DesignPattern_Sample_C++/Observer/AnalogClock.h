#ifndef	_OBSERVER_ANALOGCLOCK_H_
#define _OBSERVER_ANALOGCLOCK_H_

#include "ClockTimer.h"

namespace Observer
{
class AnalogClock : public Observer
{
public:
	AnalogClock(ClockTimer *);
	~AnalogClock();
	void Update(Subject *);
	void Draw();
private:
	ClockTimer *_subject;
};

} // namespace Observer



#endif