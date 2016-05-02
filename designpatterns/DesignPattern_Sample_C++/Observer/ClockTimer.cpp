#include "ClockTimer.h"

namespace Observer
{
void ClockTimer::Tick()
{
	_tzset();
	// Obtain operating system-style time. 
	_strtime(tmpbuf);
	notify();
}

int ClockTimer::GetHour()
{
	char timebuf[128];
	strncpy(timebuf, tmpbuf, 2);
	timebuf[2] = NULL;

	return atoi(timebuf);
}

int ClockTimer::GetMinute()
{
	char timebuf[128];
	strncpy(timebuf, tmpbuf + 3, 2);
	timebuf[2] = NULL;

	return atoi(timebuf);
}

int ClockTimer::GetSecond()
{
	char timebuf[128];
	strncpy(timebuf, tmpbuf + 6, 2);
	timebuf[2] = NULL;

	return atoi(timebuf);
}

} // namespace Observer

