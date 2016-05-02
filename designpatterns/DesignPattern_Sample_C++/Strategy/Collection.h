#ifndef	_STRATEGY_COLLECTION_H_
#define _STRATEGY_COLLECTION_H_

#include <iostream>
#include "SearchBehavior.h"
#include "SortBehavior.h"

namespace STRATEGY
{
	using namespace std;

	class Collection
	{
	private:
		SortBehavior* m_sort;
		SearchBehavior* m_search;

	public:
		Collection() {}

		void set_sort(SortBehavior *s)
		{
			m_sort = s;
		}

		void set_search(SearchBehavior *s)
		{
			m_search = s;
		}

		void sort() const
		{
			m_sort->sort();
		}

		void search() const
		{
			m_search->search();
		}
	};
}
// namespace STRATEGY
#endif