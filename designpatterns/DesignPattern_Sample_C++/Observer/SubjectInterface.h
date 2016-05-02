#ifndef	_OBSERVER_SUBJECTINTERFACE_H_
#define _OBSERVER_SUBJECTINTERFACE_H_

#include <iostream>
#include <vector>
#include <string>
#include "ObserverInterface.h"

namespace Observer
{
class SubjectInterface
{
public:
	virtual ~SubjectInterface() {};

	virtual void attach(ObserverInterface *o);
	virtual void detach(ObserverInterface *o);
	virtual void notify(int temp, float pressure);

private:
	std::vector<ObserverInterface*> _observers;
};

} // namespace Observer

#endif