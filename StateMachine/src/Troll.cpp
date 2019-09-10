#include "Troll.h"

Troll::Troll(State<Troll>* initialState)
{
    fome = 0;
    vida = 10;
    isAlive = true;
    currentState = initialState;
}

void Troll::Update() {
    currentState->Execute(this);
}

void Troll::ChangeState(State<Troll>* newState) {
    currentState->Exit(this);
    currentState = newState;
    currentState->Enter(this);
}

bool Troll::IsAlive() {
    return isAlive;
}

int Troll::GetFome() {
    return fome;
}

int Troll::GetVida() {
    return vida;
}

void Troll::SetFome(int valor) {
    fome = valor;
    if(fome >= 10) {
        cout << "Troll morreu" << endl;
        isAlive = false;
    }
}

void Troll::SetVida(int valor){
    vida = valor;
    if(vida <= 0) {
        cout << "Troll morreu" << endl;
        isAlive = false;
    }
}

Troll::~Troll()
{
    //dtor
}

