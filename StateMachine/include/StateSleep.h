#ifndef STATESLEEP_H
#define STATESLEEP_H

#include "State.h"
#include "Troll.h"
//#include "StateEating.h"

class StateEating;

class StateSleep : public State<Troll>{
    public:
        static StateSleep* GetInstance();
        void Execute(Troll* troll);
        void Enter(Troll* troll);
        void Exit(Troll* troll);

    protected:

    private:
        StateSleep();
        static StateSleep* instance;
};

#endif // STATESLEEP_H
