#include "Collection.h"


int main()
{
	using namespace STRATEGY;

	Merge merge;
	Quick quick;
	Heap heap;

	Sequential sequential;
	BinaryTree binaryTree;
	HashTable hashTable;

	Collection colletionA;
	colletionA.set_sort(&merge);
	colletionA.sort();

	colletionA.set_search(&binaryTree);
	colletionA.search();

	getchar();
	return 0;
}