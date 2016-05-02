#ifndef	_BUILDER_DIRECTOR_H_
#define _BUILDER_DIRECTOR_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Builder.h"

namespace BUILDER
{
    //Director: Director takes those individual processes from the builder and defines the sequence to build the product.
	class Director
	{
	public:
		Director() {}

		void setBuilder(Builder* bu)
		{
			m_builder = bu;
		}

		//define the build process.
		void createProduct()
		{
			m_builder->addMilk();
			m_builder->addSugar();
			m_builder->addWater();
		}

		Product& getProduct()
		{
			return m_builder->getProduct();
		}

	private:
		Builder* m_builder;
	};

} // namespace BUILDER

#endif
