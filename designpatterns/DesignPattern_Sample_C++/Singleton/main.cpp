#include "Singleton.h"
#include "SingletonRevised.h"



int main()
{
	//Singleton *s1 = Singleton::getInstance();
	//Singleton *s2 = Singleton::getInstance();
	//if (s1 == s2)
	//{
	//	cout << " Two sanme instance." << endl;
	//}

	SingletonRevised &s3 = SingletonRevised::getInstance();
	SingletonRevised &s4 = SingletonRevised::getInstance();

	getchar();
	return 0;
}