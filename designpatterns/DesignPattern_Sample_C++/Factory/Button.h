#ifndef	_FACTORY_BUTTON_H_
#define _FACTORY_BUTTON_H_

#include <iostream>

namespace Factory
{
	class Button
	{
	public:
		virtual void paint() = 0;
	};

} // namespace Factory

#endif