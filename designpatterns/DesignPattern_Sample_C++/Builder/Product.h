#ifndef	_BUILDER_PRODUCT_H_
#define _BUILDER_PRODUCT_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

namespace BUILDER
{
	using namespace std;

    //Product: Product is the final object which is produced from the builder and director coordination.
	class Product
	{
	public:
		void setSugar(const string& s)
		{
			this->sugar = s;
		}

		void setWater(const string& s)
		{
			this->water = s;
		}

		void setMilk(const string& s)
		{
			this->milk = s;
		}


		void showProduct()
		{
			cout << "Product sugar = " << (this->sugar).c_str() << endl;
			cout << "Product water = " << (this->water).c_str() << endl;
			cout << "Product milk = " << (this->milk).c_str() << endl;
		}

	private:
		string sugar;
		string water;
		string milk;
		
	};

} // namespace BUILDER

#endif
