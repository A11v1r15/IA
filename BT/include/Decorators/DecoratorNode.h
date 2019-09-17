#ifndef DECORATORNODE_H
#define DECORATORNODE_H


#include "../Node.h"

class DecoratorNode : public Node {
	protected:
		Node* child;
	public:
		const Node* getChild() const {return child;}
		void addChild (Node* child) {this->child = child;}
};

#endif // DECORATORNODE_H
