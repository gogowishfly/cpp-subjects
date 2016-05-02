#ifndef	_FACTORY_WINBUTTON_H_
#define _FACTORY_WINBUTTON_H_

#include "Button.h"

namespace Factory
{
	class WinButton : public Button
	{
	public:
		void paint()
		{
			std::cout << "Window Button" << std::endl;
		}
	};

} // namespace Factory

#endif