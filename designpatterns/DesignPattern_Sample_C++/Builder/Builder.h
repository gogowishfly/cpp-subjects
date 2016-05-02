#ifndef	_BUILDER_BUILDER_H_
#define _BUILDER_BUILDER_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Product.h"

namespace BUILDER
{
	//Builder: Builder is responsible for defining the construction process for individual parts. Builder has those individual processes to initialize and configure the product (teas).
	class Builder
	{
	public:
		Builder() {}
		~Builder() {}

		virtual void addSugar() = 0;
		virtual void addWater() = 0;
		virtual void addMilk() = 0;

		Product& getProduct()
		{
			return m_product;
		}

	protected:
		Product m_product;
	};

} // namespace BUILDER

#endif
