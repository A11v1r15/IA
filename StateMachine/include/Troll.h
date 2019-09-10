#ifndef TROLL_H
#define TROLL_H

#include "State.h"

//class State;

class Troll{
    public:
        Troll(State<Troll>* initialState);
        virtual ~Troll();
        void Update();
        void ChangeState(State<Troll>* state);
        bool IsAlive();
        int GetVida();
        int GetFome();
        void SetVida(int);
        void SetFome(int);
    protected:

    private:
        State<Troll>* currentState;
        int fome, vida;
        bool isAlive;
};

#endif // TROLL_H
