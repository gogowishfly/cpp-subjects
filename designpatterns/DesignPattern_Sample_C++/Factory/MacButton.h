#ifndef	_FACTORY_MACBUTTON_H_
#define _FACTORY_MACBUTTON_H_

#include "Button.h"

namespace Factory
{
	class MacButton : public Button
	{
	public:
		void paint()
		{
			std::cout << "Mac Button" << std::endl;
		}
	};

} // namespace Factory

#endif