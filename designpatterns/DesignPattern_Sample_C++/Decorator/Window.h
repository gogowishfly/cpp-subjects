#ifndef	_DECORATOR_WINDOW_H_
#define _DECORATOR_WINDOW_H_

#include <iostream>

namespace DECORATOR
{
	using namespace std;
	class Window
	{
	public:
		virtual void draw() = 0;
		virtual string getDescription() = 0;
		virtual ~Window() {}
	};

	class SimpleWindow : public Window
	{
	public:
		void draw()
		{
			cout << "SimpleWindow draw.\n";
		}

		string getDescription()
		{
			return "SimpleWindow\n";
		}
	};

} // namespace DECORATOR

#endif