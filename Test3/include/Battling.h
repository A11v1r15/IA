#ifndef STATE_2_H
#define STATE_2_H

#include <State.h>


class Battling : public State
{
    public:
        static Battling* getInstance();
        void Execute(Agent* agent);
        void Enter(Agent* agent);
        void Exit(Agent* agent);

    protected:

    private:
        Battling();
        static Battling* instance;
};

#endif // STATE_2_H
