#ifndef	_OBSERVER_OBSERVER_H_
#define _OBSERVER_OBSERVER_H_

#include <iostream>
#include <vector>
#include <time.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <string.h>



namespace Observer
{
class Subject;
using namespace std;

class Observer
{
public:
	Observer() {};
	~Observer() {};

	virtual void Update(Subject* subject) = 0;
};

} // namespace Observer


#endif
