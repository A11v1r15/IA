#include "Battling.h"

Battling* Battling::instance = 0;

Battling::Battling(){
}

Battling* Battling::getInstance(){
    if (instance == 0)
    {
        instance = new Battling();
    }

    return instance;
}

void Battling::Execute(Agent* agent){
}

void Battling::Enter(Agent* agent){
}

void Battling::Exit(Agent* agent){
}
