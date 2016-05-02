#ifndef	_FACTORY_MACFACTORY_H_
#define _FACTORY_MACFACTORY_H_

#include "MacScrollBar.h"
#include "MacButton.h"
#include "GUIFactory.h"

namespace Factory
{
	class MacFactory : public GUIFactory
	{
	public:
		Button* createButton()
		{
			return new MacButton;
		}

		ScrollBar* createScrollBar()
		{
			return new MacScrollbar;
		}

	};

} // namespace Factory

#endif