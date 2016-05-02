#ifndef	_COMPOSITE_NODE_H_
#define _COMPOSITE_NODE_H_

#include <iostream>

namespace COMPOSITE
{
	using namespace std;

	class Node
	{
	public:
		explicit Node(const string &n) : m_name(n) {}
		
		const string& get_name() const
		{
			return m_name;
		}

		void set_name(const std::string &n)
		{
			m_name = n;
		}

		virtual Node* copy() const = 0;
		virtual ~Node() { }
		
	private:
		Node(const Node&);
		Node& operator = (const Node&);
		string m_name;
	};

} // namespace COMPOSITE

#endif