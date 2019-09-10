#ifndef STATEEATING_H
#define STATEEATING_H

#include "State.h"
#include "Troll.h"
//#include "StateSleep.h"

class StateSleep;

class StateEating : public State<Troll>{
    public:
        static StateEating* GetInstance();
        void Execute(Troll* troll);
        void Enter(Troll* troll);
        void Exit(Troll* troll);

    protected:

    private:
        StateEating();
        static StateEating* instance;
};

#endif // STATEEATING_H
