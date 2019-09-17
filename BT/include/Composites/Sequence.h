#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "CompositeNode.h"


class Sequence : public CompositeNode {
	public:
		virtual bool run() override {
			for (Node* child : getChildren()) {
				if (!child->run())  // If one child fails, then enter operation run() fails.  Success only results if all children succeed.
                {
                    cout << "Sequence failed" << endl;
					return false;
                }
			}
			cout << "Sequence succeeded" << endl;
			return true;  // All children suceeded, so the entire run() operation succeeds.
		}
};

#endif // SEQUENCE_H
