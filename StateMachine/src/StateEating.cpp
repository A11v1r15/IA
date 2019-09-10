#include "StateEating.h"

StateEating* StateEating::instance = 0;

StateEating* StateEating::GetInstance(){
    if (instance == 0)
    {
        instance = new StateEating();
    }

    return instance;
}

void StateEating::Execute(Troll* troll){
    cout << "Comendo" << endl;
    char q;
    cin >> q;
    if(q == '1'){
        troll->ChangeState(StateSleep::GetInstance());
    }
}
void StateEating::Enter(Troll* troll){
    cout << "Preparando comida" << endl;
}

void StateEating::Exit(Troll* troll){
    cout << "Buchin chei" << endl;
}
