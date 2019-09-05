#include "Agent.h"

Agent::Agent()
{

}

Agent::~Agent()
{

}

void Agent::Update(){
    m_pCurrentState -> Execute(this);
}

void Agent::ChangeState(State* newState){
    m_pCurrentState -> Exit(this);
    m_pCurrentState = newState;
    m_pCurrentState -> Enter(this);
}

void Agent::set_hungry(int newHungry){
    hungry = std::min(std::max(newHungry, 0), 10);
}

void Agent::set_health(int newHealth){
    health = std::min(std::max(newHealth, 0), 10);
}

int Agent::get_hungry(){
    return hungry;
}

int Agent::get_health(){
    return health;
}
