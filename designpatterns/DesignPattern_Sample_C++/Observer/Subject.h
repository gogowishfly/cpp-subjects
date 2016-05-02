#ifndef	_OBSERVER_SUBJECT_H_
#define _OBSERVER_SUBJECT_H_

#include <iostream>
#include <vector>
#include <time.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <string.h>
#include "Oberver.h"

namespace Observer 
{
using namespace std;

class Subject
{
public:
	Subject() {};
	virtual ~Subject() {};

	virtual void attach(Observer *observer);
	virtual void detach(Observer *observer);
	virtual void notify();

private:
	vector<Observer*> _observers;
};

} // namespace Observer
#endif