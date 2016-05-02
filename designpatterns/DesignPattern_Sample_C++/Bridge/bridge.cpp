#include "DrawingImplementorA.h"
#include "Shape.h"

int main()
{
	using namespace BRIDGE;

	DrawingImplementorA implementorA;
	DrawingImplementorB implementorB;

	Square sqA(1, implementorA);
	Square sqB(2, implementorB);

	Shape* shapes[2];
	shapes[0] = &sqA;
	shapes[1] = &sqB;

	shapes[0]->resize(10);
	shapes[0]->draw();

	shapes[1]->resize(10);
	shapes[1]->draw();


	getchar();
	return 0;
}