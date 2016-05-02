
#include "Facade.h"

int main()
{
	using namespace FACADE;
	Facade *pFacade = new Facade();

	pFacade->MethodA();
	pFacade->MethodB();

	getchar();
	return 0;
}