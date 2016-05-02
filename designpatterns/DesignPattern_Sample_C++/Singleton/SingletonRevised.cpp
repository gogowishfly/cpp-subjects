#include "SingletonRevised.h"


SingletonRevised& SingletonRevised::getInstance()
{
	static SingletonRevised instance;
	std::cout << "Return instance!" << endl;
	return instance;
}
