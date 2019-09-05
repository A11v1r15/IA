#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <algorithm>
#include "Agent.h"

class Agent;

class State
{
    public:
        virtual void Execute(Agent* agent) = 0;
        virtual void Enter(Agent* agent) = 0;
        virtual void Exit(Agent* agent) = 0;

    protected:

    private:
};

#endif // STATE_H
