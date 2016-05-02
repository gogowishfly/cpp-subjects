#ifndef	_FACADE_FACADE_H_
#define _FACADE_FACADE_H_

#include "SubSystem.h"

namespace FACADE
{
	class Facade
	{
	public:
		Facade()
		{
			pOne = new SubSystemOne();
			pTwo = new SubSystemTwo();
			pThree = new SubSystemThree();
		}

		void MethodA()
		{
			std::cout << "Facade::MethodA" << std::endl;
			pOne->MethodOne();
			pTwo->MethodTwo();
		}

		void MethodB()
		{
			std::cout << "Facade::MethodB" << std::endl;
			pTwo->MethodTwo();
			pThree->MethodThree();
		}

	private:
		SubSystemOne *pOne;
		SubSystemTwo *pTwo;
		SubSystemThree *pThree;
};

} // namespace FACADE

#endif