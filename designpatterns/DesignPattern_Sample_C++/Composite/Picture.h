#ifndef	_COMPOSITE_PICTURE_H_
#define _COMPOSITE_PICTURE_H_

#include "Graphic.h"
#include <vector>

namespace COMPOSITE
{
	class Picture : public Graphic
	{
	public:
		void draw() const
		{
			for each (Graphic* g in g_list)
			{
				g->draw();
			}
		}

		void add(Graphic* g)
		{
			g_list.push_back(g);
		}

		void remove(Graphic* g)
		{
			vector<Graphic*>::iterator it = g_list.begin();
			for (; it != g_list.end(); it++)
			{
				if (g = *it)
				{
					break;
				}
			}

			g_list.erase(it);
		}

	private:
		vector<Graphic*> g_list;
	};

} // namespace COMPOSITE

#endif