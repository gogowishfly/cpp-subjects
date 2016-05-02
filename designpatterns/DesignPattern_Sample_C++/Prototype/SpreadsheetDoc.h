#ifndef	_PROTOTYPE_SPREADSHEETDOC_H_
#define _PROTOTYPE_SPREADSHEETDOC_H_

#include "Document.h"

namespace PROTOTYPE
{
	// Concrete prototypes : xmlDoc, plainDoc, spreadsheetDoc
	class SpreadsheetDoc : public Document
	{
	public:
		Document* clone() const
		{
			return new SpreadsheetDoc;
		}

		void store() const
		{
			std::cout << "SpreadsheetDoc " << std::endl;
		}
	};

} // namespace PROTOTYPE

#endif