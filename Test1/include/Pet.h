#ifndef PET_H
#define PET_H
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Pet
{
    public:
        Pet();
        int getHumor();
        void alimentar();
        void entreter();
        void tempo();

    protected:
        int fome;
        int tedio;
        bool isMale;

    private:
};

#endif // PET_H

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Cat: public Pet
{
    public:
        void entreter();

    protected:

    private:
};

#endif // CAT_H

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Dog: public Pet
{
    public:
        void alimentar();

    protected:

    private:
};

#endif // DOG_H
