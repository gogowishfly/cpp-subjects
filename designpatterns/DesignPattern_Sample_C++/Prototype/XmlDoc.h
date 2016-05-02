#ifndef	_PROTOTYPE_XMLDOC_H_
#define _PROTOTYPE_XMLDOC_H_

#include "Document.h"

namespace PROTOTYPE
{
	// Concrete prototypes : xmlDoc, plainDoc, spreadsheetDoc
	class XmlDoc : public Document
	{
	public:
		Document* clone() const
		{
			return new XmlDoc;
		}
		void store() const
		{
			std::cout << "XmlDoc" << std::endl;
		}

	};
} // namespace PROTOTYPE

#endif