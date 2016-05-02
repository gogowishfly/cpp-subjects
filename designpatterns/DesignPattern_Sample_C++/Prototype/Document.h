#ifndef	_PROTOTYPE_DOCUMENT_H_
#define _PROTOTYPE_DOCUMENT_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

namespace PROTOTYPE
{
	// Prototype
	class Document
	{
	public:
		virtual Document* clone() const = 0;
		virtual void store() const = 0;
		virtual ~Document() {}
	};

} // namespace PROTOTYPE

#endif