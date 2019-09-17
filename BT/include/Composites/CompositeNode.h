#ifndef COMPOSITENODE_H
#define COMPOSITENODE_H

#include "../Node.h"

class CompositeNode : public Node {
	private:
		list<Node*> children;
	public:
		const list<Node*>& getChildren() const {return children;}
		void addChild (Node* child) {children.emplace_back(child);}
};
#endif // COMPOSITENODE_H
