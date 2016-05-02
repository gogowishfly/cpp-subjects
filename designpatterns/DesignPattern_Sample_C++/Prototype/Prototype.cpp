// Prototype.cpp : Defines the entry point for the console application.
//
#include "DocumentManager.h"

// for_each op ()
struct Destruct
{
	void operator()(PROTOTYPE::Document *a) const
	{
		delete a;
	}
};

int main()
{
	using namespace PROTOTYPE;
	using namespace std;

	vector<Document*> docs(4);
	int choice;
	cout << "quit(0), xml(1), plain(2), spreadsheet(3): \n";
	while (true) 
	{
		cout << "Type in your choice (0-3)\n";
		cin >> choice;
		if (choice <= 0 || choice >= 4)
			break;

		docs[choice] = DocumentManager::makeDocument(choice);
	}

	for (int i = 1; i < docs.size(); ++i)
	{
		if (docs[i]) docs[i]->store();
	}
	
	Destruct d;
	// this calls Destruct::operator()
	for_each(docs.begin(), docs.end(), d);

	getchar();
	return 0;
}

