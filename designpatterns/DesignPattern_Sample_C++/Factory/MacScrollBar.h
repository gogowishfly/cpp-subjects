#ifndef	_FACTORY_MACSCROLLBAR_H_
#define _FACTORY_MACSCROLLBAR_H_

#include "ScrollBar.h"

namespace Factory
{
	class MacScrollbar : public ScrollBar
	{
	public:
		void paint()
		{
			std::cout << "Mac ScrollBar" << std::endl;
		}
	};

} // namespace Factory

#endif