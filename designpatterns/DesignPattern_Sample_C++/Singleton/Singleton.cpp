#include "Singleton.h"


Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance()
{
	if (instance == NULL)
	{
		instance = new Singleton();
		cout << "getInstance(): First instance\n";
		return instance;
	}

	cout << "getInstance(): previous instance\n";
	return instance;
}