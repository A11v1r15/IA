#ifndef ROOT_H
#define ROOT_H

#include "DecoratorNode.h"


class Root : public DecoratorNode {
	public:
		virtual bool run() override {
            if(child->run()) {
                cout << "Behaviour succeeded" << endl;
                return true;
            }
            else
                return false;
        }
};

#endif // ROOT_H
