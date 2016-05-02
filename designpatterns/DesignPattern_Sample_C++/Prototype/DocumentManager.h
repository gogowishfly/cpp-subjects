#ifndef	_PROTOTYPE_DOCUMENTMANAGER_H_
#define _PROTOTYPE_DOCUMENTMANAGER_H_

#include "Document.h"

namespace PROTOTYPE
{
	class DocumentManager
	{
	public:
		static Document* makeDocument(int choice);
		~DocumentManager() {}

	private:
		static Document* mDocTypes[4];
	};
} // namespace PROTOTYPE

#endif