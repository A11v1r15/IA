#include "Inventory.h"

Inventory::Inventory() {
}

void Inventory::addItem(Item i) {
    itens.push(i);
}

Item Inventory::getItem() {
    return itens.top();
}

void Inventory::see() {
    stack<Item> safe = itens;
    while (!safe.empty())
    {
        Item item = safe.top();
        cout << item.getName() << '\t' << item.getPower() << endl;
        safe.pop();
    }
    cout << '\n';
}

void Inventory::reset() {
    while (!itens.empty())
    {
        itens.pop();
    }
}
