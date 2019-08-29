#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Item
{
    public:
        Item();
        Item(string n, int p);
        string getName();
        int getPower();

    protected:

    private:
        string name;
        int power;
};

#endif // ITEM_H
