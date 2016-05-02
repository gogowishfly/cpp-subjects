#ifndef	_PROTOTYPE_PLAINDOC_H_
#define _PROTOTYPE_PLAINDOC_H_

#include "Document.h"

namespace PROTOTYPE
{
	// Concrete prototypes : xmlDoc, plainDoc, spreadsheetDoc
	class PlainDoc : public Document
	{
	public:
		Document* clone() const
		{
			return new PlainDoc;
		}
		
		void store() const
		{
			std::cout << "PlainDoc" << std::endl;
		}
	};

} // namespace PROTOTYPE

#endif