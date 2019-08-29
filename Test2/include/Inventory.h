#ifndef INVENTORY_H
#define INVENTORY_H
#include <stack>
#include "Item.h"

using namespace std;

class Inventory
{
    public:
        Inventory();
        void addItem(Item i);
        Item getItem();
        void see();
        void reset();

    protected:

    private:
        stack<Item> itens;
};

#endif // INVENTORY_H
