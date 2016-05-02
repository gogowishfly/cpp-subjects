
#include "PaperBuilder.h"
#include "Director.h"
#include "UsaBuilder.h"

int main()
{
	using namespace BUILDER;
	Director directot;

	cout << "Build paper." << endl;
	directot.setBuilder(new PaperBuilder());
	directot.createProduct();

	Product& paperPrd = directot.getProduct();
	paperPrd.showProduct();

	cout << "Build usa." << endl;
	directot.setBuilder(new UsaBuilder());
	directot.createProduct();

	Product& usaPrd = directot.getProduct();
	usaPrd.showProduct();

	getchar();
	return 0;
}