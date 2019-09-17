#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <list>
using namespace std;


class Node {
	public:
	    bool active = true;
		virtual bool run() = 0;
};

#endif // NODE_H
