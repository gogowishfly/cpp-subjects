#ifndef	_FACTORY_GUIFACTORY_H_
#define _FACTORY_GUIFACTORY_H_

#include "Button.h"
#include "ScrollBar.h"

namespace Factory
{
	class GUIFactory
	{
	public:
		virtual Button* createButton() = 0;
		virtual ScrollBar* createScrollBar() = 0;
	};
} // namespace Factory

#endif