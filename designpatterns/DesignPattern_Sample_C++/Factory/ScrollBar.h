#ifndef	_FACTORY_SCROLLBAR_H_
#define _FACTORY_SCROLLBAR_H_

#include <iostream>

namespace Factory
{
	class ScrollBar
	{
	public:
		virtual void paint() = 0;
	};

} // namespace Factory

#endif