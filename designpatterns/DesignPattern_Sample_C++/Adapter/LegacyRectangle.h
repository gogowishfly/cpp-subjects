#ifndef	_ADAPTER_LEGACTRECTANLE_H_
#define _ADAPTER_LEGACTRECTANLE_H_

#include <iostream>

namespace ADAPTER
{
// Legacy component (Adaptee)
class LegacyRectangle
{
public:
	LegacyRectangle(int x1, int y1, int x2, int y2)
	{
		x1_ = x1;
		y1_ = y1;
		x2_ = x2;
		y2_ = y2;
		std::cout << "LegacyRectangle(x1, y1, x2, y2)" << std::endl;
	}

	void oldDraw()
	{
		std::cout << "LegacyRectangle oldDraw" << std::endl;
	}

private:
	int x1_;
	int x2_;
	int y1_;
	int y2_;
};
} // namespace ADAPTER

#endif