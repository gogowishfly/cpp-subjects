#ifndef	_ADAPTER_RECTANGLEADAPTER_H_
#define _ADAPTER_RECTANGLEADAPTER_H_

#include "LegacyRectangle.h"
#include "Rectangle.h"

namespace ADAPTER
{
// Adapter wrapper
class RectangleAdapter : public Rectangle, private LegacyRectangle
{
public:
	RectangleAdapter(int x, int y, int w, int h) : 
	LegacyRectangle(x, y, x + w, y + h)
	{
		std::cout << "RectangleAdapter(x, y, x + w, x + h)" << std::endl;
	}

	void draw()
	{
		std::cout << "RectangleAdapter: draw()." << std::endl;
		oldDraw();
	}
};
} // namespace ADAPTER

#endif