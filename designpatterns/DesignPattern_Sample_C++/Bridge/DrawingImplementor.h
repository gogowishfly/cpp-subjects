#ifndef	_BRIDGE_DRAWINGIMPLEMENTOR_H_
#define _BRIDGE_DRAWINGIMPLEMENTOR_H_

#include <iostream>

namespace BRIDGE
{
	using namespace std;
	// Implementor
	class DrawingImplementor
	{
	public:
		virtual void drawSquare(double side) = 0;

		virtual ~DrawingImplementor() {}
	};
} // namespace BRIDGE

#endif