#include "AnalogClock.h"

namespace Observer
{
AnalogClock::AnalogClock(ClockTimer *s)
{
	_subject = s;
	_subject->attach(this);
}

AnalogClock::~AnalogClock()
{
	_subject->detach(this);
}

void AnalogClock::Update(Subject *Subject)
{
	if (Subject == _subject)
		Draw();
}

void AnalogClock::Draw()
{
	int hour = _subject->GetHour();
	int minute = _subject->GetMinute();
	int second = _subject->GetSecond();

	cout << "Analog time is " << hour << ":"
		<< minute << ":"
		<< second << endl;
}


} // namespace Observer

