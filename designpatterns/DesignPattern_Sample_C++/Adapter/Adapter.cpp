// Adapter.cpp : Defines the entry point for the console application.
//

#include "RectangleAdapter.h"

int main()
{
	using namespace ADAPTER;

	int x = 20, y = 50, w = 300, h = 200;
	Rectangle *p = new RectangleAdapter(x, y, w, h);
	p->draw();

	getchar();
	return 0;
}

