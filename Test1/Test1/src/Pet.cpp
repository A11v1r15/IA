#include "../include/Pet.h"

Pet::Pet()
{
    fome = 0;
    tedio = 0;
    srand (time(NULL));
    isMale = rand() % 2 == 0;
}

int Pet::getHumor(){
    int humor = fome + tedio;
    if (humor > 15){
            if(isMale)
        cout << "Estou deprimido" << endl;
            else
        cout << "Estou deprimida" << endl;
    } else if (humor > 10){
            if(isMale)
        cout << "Estou frustrado" << endl;
            else
        cout << "Estou frustrada" << endl;
    } else if (humor > 5){
        cout << "Estou ok" << endl;
    } else {
        cout << "Estou feliz" << endl;
    }
    cout << "(" << fome << "," << tedio << ")" << endl;
    return humor;
}

void Pet::alimentar(){
    fome -= 3;
    if (fome < 0){
        fome = 0;
    }
    cout << "Chomp, chomp, chomp" << endl;
}

void Pet::entreter(){
    tedio -= 3;
    if (tedio < 0){
        tedio = 0;
    }
    cout << "Yay, uhull !!" << endl;
}

void Pet::tempo(){
    tedio += 1;
    fome += 1;
}

void Cat::entreter(){
    tedio -= 1;
    if (tedio < 0){
        tedio = 0;
    }
    cout << "Yay, uhull !!" << endl;
}

void Dog::alimentar(){
    fome -= 1;
    if (fome < 0){
        fome = 0;
    }
    cout << "Chomp, chomp, chomp" << endl;
}
