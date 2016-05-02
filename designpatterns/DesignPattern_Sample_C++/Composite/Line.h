#ifndef	_COMPOSITE_LINE_H_
#define _COMPOSITE_LINE_H_

#include "Graphic.h"

namespace COMPOSITE
{
	class Line : public Graphic
	{
	public:
		void draw() const 
		{
			cout << "Line draw()\n";
		}
	};

	class Rectangle : public Graphic
	{
	public:
		void draw() const
		{
			cout << "Rectangle draw()\n";
		}
	};

	class Text : public Graphic 
	{
	public:
		void draw() const 
		{
			cout << "Text draw() \n";
		}
	};

} // namespace COMPOSITE

#endif