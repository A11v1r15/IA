#ifndef STATE_3_H
#define STATE_3_H

#include <State.h>


class Hunting : public State
{
    public:
        static Hunting* getInstance();
        void Execute(Agent* agent);
        void Enter(Agent* agent);
        void Exit(Agent* agent);

    protected:

    private:
        Hunting();
        static Hunting* instance;
};

#endif // STATE_3_H
