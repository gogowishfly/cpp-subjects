#ifndef	_STRATEGY_SORTBEHAVIOR_H_
#define _STRATEGY_SORTBEHAVIOR_H_

#include <iostream>

namespace STRATEGY
{
	using namespace std;

	class SortBehavior
	{
	public:
		virtual void sort() const = 0;
	};


	class Merge : public SortBehavior
	{
	public:
		virtual void sort() const
		{
			cout << "Merge sort()\n";
		}
	};

	class Quick : public SortBehavior
	{
	public:
		virtual void sort() const
		{
			cout << "Quick  sort()\n";
		}
	};

	class Heap : public SortBehavior
	{
	public:
		virtual void sort() const
		{
			cout << "Heap  sort()\n";
		}
	};
}
// namespace STRATEGY
#endif