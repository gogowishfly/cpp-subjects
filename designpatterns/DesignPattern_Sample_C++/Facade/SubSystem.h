#ifndef	_FACADE_SUBSYSTEM_H_
#define _FACADE_SUBSYSTEM_H_

#include <iostream>

namespace FACADE
{
	using namespace std;
	class SubSystemOne
	{
	public:
		void MethodOne(){ std::cout << "SubSystem 1" << std::endl; };
	};

	// Subsystem 2
	class SubSystemTwo
	{
	public:
		void MethodTwo(){ std::cout << "SubSystem 2" << std::endl; };
	};

	// Subsystem 3 
	class SubSystemThree
	{
	public:
		void MethodThree(){ std::cout << "SubSystem 3" << std::endl; }
	};

} // namespace FACADE

#endif