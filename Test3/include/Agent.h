#ifndef AGENT_H
#define AGENT_H

#include <algorithm>
#include "State.h"

class State;

class Agent
{
    public:
        Agent();
        virtual ~Agent();
        State* m_pCurrentState;
        void Update();
        void ChangeState(State* newState);

        void set_hungry(int newHungry);
        void set_health(int newHealth);
        int  get_hungry();
        int  get_health();

    protected:

    private:
        int hungry;
        int health;
};

#endif // STATE_H
