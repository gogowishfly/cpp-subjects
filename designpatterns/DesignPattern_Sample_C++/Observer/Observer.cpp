// Observer.cpp : Defines the entry point for the console application.
//

#include "AnalogClock.h"
#include "DigitalClock.h"
#include "ClockTimer.h"
#include "MyObserver.h"
#include "MySubject .h"


int main()
{
	using namespace Observer;

	ClockTimer timer;
	DigitalClock digitalClock(&timer);
	AnalogClock analogClock(&timer);

	timer.Tick();


	MyObserver myObserver1(1, 2);
	MyObserver myObserver2(2, 4);
	MyObserver myObserver3(3, 6);

	MySubject subject;
	subject.attach(&myObserver1);
	subject.attach(&myObserver2);
	subject.attach(&myObserver3);

	subject.notify(4, 5);

	getchar();
	return 0;
}

