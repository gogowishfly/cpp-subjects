#ifndef	_STRATEGY_SEARCHBEHAVIOR_H_
#define _STRATEGY_SEARCHBEHAVIOR_H_

#include <iostream>

namespace STRATEGY
{
	using namespace std;

	class SearchBehavior
	{
	public:
		virtual void search() const = 0;
	};

	class Sequential : public SearchBehavior
	{
	public:
		virtual void search() const 
		{
			cout << "Sequential search()\n";
		}
	};

	class BinaryTree : public SearchBehavior
	{
	public:
		virtual void search() const 
		{
			cout << "BinaryTree search()\n";
		}
	};

	class HashTable : public SearchBehavior
	{
	public:
		virtual void search() const 
		{
			cout << "HashTable search()\n";
		}
	};

}
// namespace STRATEGY
#endif