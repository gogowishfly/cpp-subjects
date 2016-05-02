#ifndef	_BUILDER_USABUILDER_H_
#define _BUILDER_USABUILDER_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Builder.h"

namespace BUILDER
{
	//Builder: Builder is responsible for defining the construction process for individual parts. Builder has those individual processes to initialize and configure the product (teas).
	class UsaBuilder : public Builder
	{
	public:
		UsaBuilder() {}
		~UsaBuilder() {}

		void addSugar()
		{
			m_product.setSugar("usa sugar");
		}

		void addWater()
		{
			m_product.setWater("usa water");
		}

		void addMilk()
		{
			m_product.setMilk("usa milk");
		}
	};

} // namespace BUILDER

#endif
