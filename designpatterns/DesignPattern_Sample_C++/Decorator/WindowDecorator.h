#ifndef	_DECORATOR_WINDOWDECORATOR_H_
#define _DECORATOR_WINDOWDECORATOR_H_

#include "Window.h"

namespace DECORATOR
{
	class WindowDecorator : public Window
	{
	protected:
		Window *m_decoratedWindow;

	public:
		WindowDecorator(Window *decoratedWindow) : m_decoratedWindow(decoratedWindow) {}
		
	};

	class VerticalScrollBarDecorator : public WindowDecorator
	{
	public:
		VerticalScrollBarDecorator(Window *decoratedWindow) :
			WindowDecorator(decoratedWindow) {}

		void draw() 
		{
			drawVerticalScrollBar();
			m_decoratedWindow->draw();
		}

		string getDescription() 
		{
			return m_decoratedWindow->getDescription() + "with vertical scrollbars\n";
		}

	private:
		void drawVerticalScrollBar()
		{
			cout << "drawVerticalScrollBar.";
		}
	};

	class HorizontalScrollBarDecorator : public WindowDecorator
	{
	public:
		HorizontalScrollBarDecorator(Window *decoratedWindow) :
			WindowDecorator(decoratedWindow) {}

		void draw() 
		{
			drawHorizontalScrollBar();
			m_decoratedWindow->draw();
		}

		string getDescription() 
		{
			return m_decoratedWindow->getDescription() + "with horizontal scrollbars\n";
		}
	private:
		void drawHorizontalScrollBar() 
		{
			cout << "drawHorizontalScrollBar.";
		}
	};

} // namespace DECORATOR

#endif