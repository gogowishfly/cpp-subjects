#ifndef	_BRIDGE_DRAWINGIMPLEMENTORA_H_
#define _BRIDGE_DRAWINGIMPLEMENTORA_H_

#include "DrawingImplementor.h"

namespace BRIDGE
{
	// Implementor
	class DrawingImplementorA : public DrawingImplementor
	{
	public:
		// example: drawing with brush
		void drawSquare(double side) 
		{
			cout << "\nImplementorA.square with side = " << side << endl;
		}
	};

	// Implementor
	class DrawingImplementorB : public DrawingImplementor
	{
	public:
		// example: drawing with pencil
		void drawSquare(double side)
		{
			cout << "\nImplementorB.square with side = " << side << endl;
		}
	};
} // namespace BRIDGE

#endif