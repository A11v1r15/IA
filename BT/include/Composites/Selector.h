#ifndef SELECTOR_H
#define SELECTOR_H

#include "CompositeNode.h"

class Selector : public CompositeNode {
	public:
		virtual bool run() override {
			for (Node* child : getChildren()) {
                if (child->run())  // If one child succeeds, the entire operation run() succeeds.  Failure only results if all children fail.
				{
					cout << "Selector succeeded" << endl;
					return true;
				}
			}
			cout << "Selector failed" << endl;
			return false;  // All children failed so the entire run() operation fails.
		}
};

#endif // SELECTOR_H
