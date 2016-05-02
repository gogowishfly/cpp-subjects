#ifndef	_OBSERVER_MYSUBJECT_H_
#define _OBSERVER_MYSUBJECT_H_

#include <iostream>
#include <vector>
#include <string>
#include "SubjectInterface.h"

namespace Observer
{
class MySubject : public SubjectInterface
{
public:
	int temp;
	float pressure;
};

} // namespace Observer

#endif