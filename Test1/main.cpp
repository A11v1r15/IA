#include <iostream>
#include "./include/Pet.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char * argv[])
{
    srand (time(NULL));
    if (rand() % 2 == 0){
        Cat pet;
    } else {
        Dog pet;
    }
    bool Continuar = true;
    char input;
//    time_t timer;
//    time(&timer);
    while (Continuar){
//        if(time(NULL) >= timer + 10){
//            pet.tempo();
//            time(&timer);
//       }
        cout << "  ~Pet  Caretaker~  " << endl;
        cout << "  Seu Pet virtual!  " << endl;
        cout << "-------Opcoes-------" << endl;
        cout << "                    " << endl;
        cout << "a) Ouvir o seu Pet  " << endl;
        cout << "s) Alimentar seu Pet" << endl;
        cout << "d) Brincar com o Pet" << endl;
        cout << "f) Sair             " << endl;

        cin >> input;
        if (input == 'a'){
            cout << "Voce esta ouvindo seu pet:" << endl;
            pet.getHumor();
        } else if (input == 's'){
            cout << "Voce esta alimentando seu pet:" << endl;
            pet.alimentar();
        } else if (input == 'd'){
            cout << "Voce esta brincando com seu pet:" << endl;
            pet.entreter();
        } else if (input == 'f'){
            Continuar = false;
        }
        cout << "\n\n\n\n\n\n\n" << endl;
        pet.tempo();
    }
    return 0;
}
