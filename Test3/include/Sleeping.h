#ifndef STATE_1_H
#define STATE_1_H

#include <State.h>


class Sleeping : public State
{
    public:
        static Sleeping* getInstance();
        void Execute(Agent* agent);
        void Enter(Agent* agent);
        void Exit(Agent* agent);

    protected:

    private:
        Sleeping();
        static Sleeping* instance;
};

#endif // STATE_1_H
