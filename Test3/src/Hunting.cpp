#include "Hunting.h"

Hunting* Hunting::instance = 0;

Hunting::Hunting(){
}
Hunting* Hunting::getInstance(){
    if (instance == 0)
    {
        instance = new Hunting();
    }

    return instance;
}

void Hunting::Execute(Agent* agent){
    std::cout << "It is hunting" << std::endl;
    agent -> set_health(agent -> get_health() - 1);
    agent -> set_hungry(agent -> get_hungry() - 3);
}

void Hunting::Enter(Agent* agent){
}

void Hunting::Exit(Agent* agent){
}
