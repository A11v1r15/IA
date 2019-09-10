#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

template <class T>
class State{
    public:
        virtual void Execute(T *) = 0;
        virtual void Enter(T *) = 0;
        virtual void Exit(T *) = 0;

    protected:

    private:
};

#endif // STATE_H
