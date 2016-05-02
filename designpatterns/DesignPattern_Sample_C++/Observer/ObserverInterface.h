#ifndef	_OBSERVER_OBSERVERINTERFACE_H_
#define _OBSERVER_OBSERVERINTERFACE_H_

namespace Observer
{
class ObserverInterface
{
public:
	 virtual ~ObserverInterface() {};
	 virtual void Update(int temp, float pressure) = 0;
};

} // namespace Observer

#endif