#include <iostream>
#include "Item.h"
#include "Inventory.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Item item1;
    Item item2;
    Item item3;
    Item item4;
    Item item5;
    Inventory bag;
    bag.addItem(item1);
    bag.addItem(item2);
    bag.addItem(item3);
    bag.addItem(item4);
    bag.addItem(item5);
    bag.see();
    return 0;
}
