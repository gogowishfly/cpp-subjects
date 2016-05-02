#ifndef	_BRIDGE_SHAPE_H_
#define _BRIDGE_SHAPE_H_

#include "DrawingImplementor.h"

namespace BRIDGE
{
	// Abstraction
	class Shape
	{
	public:
		virtual void draw() = 0;
		virtual void resize(double pct) = 0;

		virtual ~Shape() {}
	};

	// Refined Abstraction
	class Square : public Shape
	{
	public:
		Square(double s, DrawingImplementor& implementor) : side(s), drawingImplementor(implementor) {}

		void draw()
		{
			drawingImplementor.drawSquare(side);
		}

		void resize(double pct)
		{
			side = pct;
		}

	private:
		double side;
		DrawingImplementor& drawingImplementor;
	};
} // namespace BRIDGE

#endif