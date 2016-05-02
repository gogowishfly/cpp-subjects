#include "SubjectInterface.h"

namespace Observer
{

void SubjectInterface::attach(ObserverInterface *o)
{
	_observers.push_back(o);
}

void SubjectInterface::detach(ObserverInterface *o)
{
	int count = _observers.size();
	int it = 0;
	for (; it < count; it++)
	{
		if (_observers[it] == o)
			break;
	}

	if (it < count)
		_observers.erase(_observers.begin() + it);
}

void SubjectInterface::notify(int temp, float pressure)
{
	for (std::vector<ObserverInterface*>::iterator it = _observers.begin(); it != _observers.end(); it++)
	{
		(*it)->Update(temp, pressure);
	}
}

} // namespace Observer
