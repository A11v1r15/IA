#include "Sleeping.h"

Sleeping* Sleeping::instance = 0;

Sleeping::Sleeping(){
}

Sleeping* Sleeping::getInstance(){
    if (instance == 0)
    {
        instance = new Sleeping();
    }

    return instance;
}

void Sleeping::Execute(Agent* agent){
    std::cout << "It is sleeping" << std::endl;
    agent -> set_health(agent -> get_health() + 1);
    agent -> set_hungry(agent -> get_hungry() + 1);


}

void Sleeping::Enter(Agent* agent){
}

void Sleeping::Exit(Agent* agent){
}

