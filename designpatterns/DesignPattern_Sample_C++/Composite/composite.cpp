
#include "Picture.h"
#include "Line.h"
#include "SimpleNode.h"
#include "ComplexNode.h"

int main()
{
	using namespace COMPOSITE;

	Line line;
	line.draw();
	Rectangle rect;
	rect.draw();
	Text text;
	text.draw();

	Picture pic;
	pic.add(&line);
	pic.add(&rect);
	pic.add(&text);
	pic.add(&rect);
	pic.draw();
	

	SimpleNode *sa = SimpleNode::create("simpleA", "sA");
	SimpleNode *sb = SimpleNode::create("simpleB", "sB");
	ComplexNode *ca = ComplexNode::create("cmplxA");
	ComplexNode *cb = ComplexNode::create("cmplxB");
	ComplexNode *cc = ComplexNode::create("cmplxC");
	ca->append_node(cb);
	ca->append_node(cc);
	cb->append_node(sa);
	cb->append_node(sb);

	list<Node*> nodes;
	nodes.push_back(ComplexNode::create("cmplx1"));
	nodes.push_back(ComplexNode::create("cmplx2"));
	list<Node*>::const_iterator b = nodes.begin(), e = nodes.end();
	ComplexNode *cd = ComplexNode::create("cmplx3", b, --e);

	getchar();
	return 0;
}