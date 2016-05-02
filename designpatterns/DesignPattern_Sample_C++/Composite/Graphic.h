#ifndef	_COMPOSITE_GRAPHIC_H_
#define _COMPOSITE_GRAPHIC_H_

#include <iostream>

namespace COMPOSITE
{
	using namespace std;

	class Graphic
	{
	public:
		virtual void draw() const = 0;
		virtual void remove(Graphic* g) {}
		virtual void add(Graphic* g) {}
		virtual void getChild(int num) {}
		virtual ~Graphic() {}
	};

} // namespace COMPOSITE

#endif