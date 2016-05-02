
#include "WindowDecorator.h"

int main()
{
	using namespace DECORATOR;
	using namespace std;

	Window *simple = new SimpleWindow();
	cout << simple->getDescription().c_str() << endl;

	Window *horiz = new HorizontalScrollBarDecorator(new SimpleWindow());
	cout << horiz->getDescription().c_str() << endl;

	Window *vert = new VerticalScrollBarDecorator(new SimpleWindow());
	cout << vert->getDescription().c_str() << endl;

	Window *decoratedWindow = new HorizontalScrollBarDecorator(new VerticalScrollBarDecorator(new SimpleWindow()));
	cout << decoratedWindow->getDescription().c_str() << endl;

	getchar();
	return 0;
}