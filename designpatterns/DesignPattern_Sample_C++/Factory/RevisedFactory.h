#ifndef	_FACTORY_REVISEDFACTORY_H_
#define _FACTORY_REVISEDFACTORY_H_

#include "MacFactory.h"
#include "WinFactory.h"

namespace Factory
{
	class RevisedFactory 
	{
	public:
		Button* createButton(const std::string &name)
		{
			if ("win" == name)
			{
				return new WinButton;
			}
			else if ("mac" == name)
			{
				return new MacButton;
			}
			else
			{
				return NULL;
			}
		}
	};

} // namespace Factory

#endif