#include "DocumentManager.h"
#include "XmlDoc.h"
#include "PlainDoc.h"
#include "SpreadsheetDoc.h"

namespace PROTOTYPE
{
	Document* DocumentManager::mDocTypes[] =
	{
		0, new XmlDoc, new PlainDoc, new SpreadsheetDoc
	};

	Document* DocumentManager::makeDocument(int choice)
	{
		return mDocTypes[choice]->clone();
	}
}


