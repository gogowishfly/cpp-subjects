#ifndef	_OBSERVER_DIGITALCLOCK_H_
#define _OBSERVER_DIGITALCLOCK_H_

#include "ClockTimer.h"


namespace Observer
{
class DigitalClock : public Observer
{
public:
	DigitalClock(ClockTimer *ct);
	~DigitalClock();

	void Update(Subject *subject);
	void Draw();

private:
	ClockTimer *_subject;
};

} // namespace Observer




#endif