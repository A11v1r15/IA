#include "Item.h"

Item::Item()
{
    name = "nameless";
    srand (time(NULL));
    power = rand() % 255;
}

Item::Item(string n,int p)
{
    name = "nameless";
    srand (time(NULL));
    power = rand() % 255;
}

string Item::getName() {
    return name;
}

int Item::getPower() {
    return power;
}
