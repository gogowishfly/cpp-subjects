#include "DigitalClock.h"

namespace Observer
{
DigitalClock::DigitalClock(ClockTimer *ct)
{
	_subject = ct;
	_subject->attach(this);
}

DigitalClock::~DigitalClock()
{
	_subject->detach(this);
}

void DigitalClock::Update(Subject *subject)
{
	if (subject == _subject)
		Draw();
}


void DigitalClock::Draw()
{
	int hour = _subject->GetHour();
	int minute = _subject->GetMinute();
	int second = _subject->GetSecond();

	cout << "Digital time is " << hour << ":"
		<< minute << ":"
		<< second << endl;
}


} // namespace Observer
