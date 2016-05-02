#include "Subject.h"

namespace Observer 
{
void Subject::attach(Observer *observer)
{
	_observers.push_back(observer);

}

void Subject::detach(Observer *observer)
{
	unsigned int size = _observers.size();
	unsigned i = 0;
	for (; i < size; i++)
	{
		if (observer == _observers[i])
			break;
	}

	if (i < size)
		_observers.erase(_observers.begin() + i);
}

void Subject::notify()
{
	unsigned int size = _observers.size();

	for (unsigned i = 0; i < size; i++)
	{
		(_observers[i])->Update(this);
	}
}

} // namespace Observer