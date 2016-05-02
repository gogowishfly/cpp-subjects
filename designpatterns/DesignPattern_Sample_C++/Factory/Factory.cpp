// Factory.cpp : Defines the entry point for the console application.
//

#include "RevisedFactory.h"

int main()
{
	using namespace Factory;
	GUIFactory* guiFactory;
	Button* btn;
	ScrollBar* sb;

	guiFactory = new MacFactory();
	btn = guiFactory->createButton();
	btn->paint();
	sb = guiFactory->createScrollBar();
	sb->paint();

	guiFactory = new WinFactory();
	btn = guiFactory->createButton();
	btn->paint();
	sb = guiFactory->createScrollBar();
	sb->paint();

	RevisedFactory* revisedFactory = new RevisedFactory();
	btn = revisedFactory->createButton("mac");
	btn->paint();

	btn = revisedFactory->createButton("win");
	btn->paint();

	btn = revisedFactory->createButton("none");
	if (NULL == btn)
	{
		std::cout << "No button." << std::endl;
	}

	getchar();

	return 0;
}

