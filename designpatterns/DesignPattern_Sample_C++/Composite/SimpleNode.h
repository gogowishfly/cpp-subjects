#ifndef	_COMPOSITE_SIMPLENODE_H_
#define _COMPOSITE_SIMPLENODE_H_

#include "Node.h"

namespace COMPOSITE
{
	class SimpleNode : public Node
	{
	private:
		SimpleNode(const string &n, const string &v) : Node(n), m_value(v) {}

	public:
		static SimpleNode* create(const std::string &n, const std::string &v)
		{
			return new SimpleNode(n, v);
		}

		const std::string& get_value() const 
		{
			return m_value;
		}

		void set_value(const std::string &v) 
		{
			m_value = v; 
		}

		SimpleNode* copy() const
		{
			return SimpleNode::create(get_name(), get_value());
		}
		
	private:
		string m_value;
		SimpleNode(const SimpleNode&);
		SimpleNode& operator = (const SimpleNode&);
	};

} // namespace COMPOSITE

#endif