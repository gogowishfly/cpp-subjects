#ifndef	_OBSERVER_MYOBSERVER_H_
#define _OBSERVER_MYOBSERVER_H_

#include <iostream>
#include <vector>
#include <string>
#include "SubjectInterface.h"

namespace Observer
{
class MyObserver : public ObserverInterface
{
public:
	MyObserver(int temp, float pressure);
	void Update(int temp, float pressure);

private:
	int _temp;
	float _pressure;
};

} // namespace Observer

#endif