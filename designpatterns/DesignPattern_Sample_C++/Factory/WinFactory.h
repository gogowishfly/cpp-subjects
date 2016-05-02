#ifndef	_FACTORY_WINFACTORY_H_
#define _FACTORY_WINFACTORY_H_

#include "GUIFactory.h"
#include "WinButton.h"
#include "WinScrollBar.h"

namespace Factory
{
	class WinFactory :public GUIFactory
	{
	public:
		Button* createButton()
		{
			return new WinButton;
		}

		ScrollBar* createScrollBar()
		{
			return new WindowScrollBar;
		}
	};

} // namespace Factory

#endif