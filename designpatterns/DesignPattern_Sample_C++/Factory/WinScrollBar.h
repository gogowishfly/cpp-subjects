#ifndef	_FACTORY_WINSCROLLBAR_H_
#define _FACTORY_WINSCROLLBAR_H_

#include "ScrollBar.h"

namespace Factory
{
	class WindowScrollBar : public ScrollBar
	{
	public:
		void paint()
		{
			std::cout << "Window ScrollBar" << std::endl;
		}

	};
} // namespace Factory

#endif