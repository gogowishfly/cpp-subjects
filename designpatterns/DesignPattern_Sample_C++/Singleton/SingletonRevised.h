#include <iostream>

using namespace std;

class SingletonRevised
{
public:
	static SingletonRevised& getInstance();

private:
	SingletonRevised() { std::cout << "Constructor!" << endl; };
	~SingletonRevised() { std::cout << "Destructor!" << endl; };
	
	// C++ 03
	// ========
	// Dont forget to declare these two. You want to make sure they
	// are unacceptable otherwise you may accidentally get copies of
	// your singleton appearing.
	SingletonRevised(const SingletonRevised&);
	void operator = (SingletonRevised const&);
};
