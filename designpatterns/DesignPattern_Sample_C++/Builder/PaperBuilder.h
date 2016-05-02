#ifndef	_BUILDER_PAPERBUILDER_H_
#define _BUILDER_PAPERBUILDER_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Builder.h"

namespace BUILDER
{
	//Builder: Builder is responsible for defining the construction process for individual parts. Builder has those individual processes to initialize and configure the product (teas).
	class PaperBuilder : public Builder
	{
	public:
		PaperBuilder() {}
		~PaperBuilder() {}

		void addSugar()
		{
			m_product.setSugar("paper sugar");
		}

		void addWater()
		{
			m_product.setWater("paper water");
		}
		
		void addMilk()
		{
			m_product.setMilk("paper milk");
		}
	};

} // namespace BUILDER

#endif
