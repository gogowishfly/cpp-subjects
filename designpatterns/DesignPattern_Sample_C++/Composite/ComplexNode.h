#ifndef	_COMPOSITE_COMPLEXNODE_H_
#define _COMPOSITE_COMPLEXNODE_H_

#include "Node.h"
#include <list>
#include <functional>
#include <iterator>
#include <algorithm>

namespace COMPOSITE
{
	typedef list<Node*> ChildNodes;

	class ComplexNode : public Node
	{
	private:
		explicit ComplexNode(const std::string &n) : Node(n) { }

		template<typename ITER>
		ComplexNode(const std::string &n, ITER b, ITER e) : Node(n), m_child_nodes(b, e) {}

	public:
		static ComplexNode* create(const std::string &s) 
		{
			return new ComplexNode(s);
		}

		template<typename ITER>
		static ComplexNode* create(const std::string &s, ITER b, ITER e)
		{
			return new ComplexNode(s, b, e);
		}

		
		const ChildNodes& get_child_nodes() const 
		{ 
			return m_child_nodes; 
		}

		void append_node(Node *n)
		{
			m_child_nodes.push_back(n);
		}

		void remove_node(Node *nd)
		{
			ChildNodes &c = m_child_nodes;
			ChildNodes::iterator i = std::find(c.begin(), c.end(), nd);
			if (i != c.end()) 
			{
				c.erase(i);
			}
		}

		ComplexNode* copy() const
		{
			ChildNodes c;
			copy_children(c);
			return ComplexNode::create(get_name(), c.begin(), c.end());
		}

		~ComplexNode()
		{
			const ChildNodes &c = get_child_nodes();
			ChildNodes::const_iterator b = c.begin();
			for (; b != c.end(); ++b) delete *b;

		}

	private:
		void copy_children(ChildNodes &c) const
		{
			const ChildNodes &t = get_child_nodes();
			std::transform(t.begin(), t.end(), std::back_inserter(c), std::mem_fun(&Node::copy));
		}

		ChildNodes m_child_nodes;

		ComplexNode(const ComplexNode&);
		ComplexNode& operator=(const ComplexNode&);
	};

} // namespace COMPOSITE

#endif