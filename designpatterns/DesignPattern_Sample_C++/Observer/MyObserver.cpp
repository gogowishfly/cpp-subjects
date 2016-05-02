#include "MyObserver.h"

namespace Observer
{
MyObserver::MyObserver(int temp, float pressure)
{
	_temp = temp;
	_pressure = pressure;
	std::cout << " Current temp = " << temp << " presure = " << pressure << std::endl;
}

void MyObserver::Update(int temp, float pressure)
{
	std::cout << " Got update temp = " << temp << " presure = " << pressure << std::endl;
}

}