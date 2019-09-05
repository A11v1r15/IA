#ifndef TROLL_H
#define TROLL_H

#include <Agent.h>


class Troll : public Agent
{
    public:
        Troll();
        virtual ~Troll();

    protected:

    private:
        int hungry;
        int health;
};

#endif // TROLL_H
