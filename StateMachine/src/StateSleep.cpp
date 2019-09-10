#include "StateSleep.h"

StateSleep* StateSleep::instance = 0;

StateSleep* StateSleep::GetInstance(){
    if (instance == 0)
    {
        instance = new StateSleep();
    }

    return instance;
}

void StateSleep::Execute(Troll* troll){
    cout << "Dormindo" << endl;
    char q;
    cin >> q;
    if(q == '1'){
        troll->ChangeState(StateEating::GetInstance());
    }
}

void StateSleep::Enter(Troll* troll){
    cout << "Indo Dormir" << endl;
}

void StateSleep::Exit(Troll* troll){
    cout << "Acordando" << endl;
}
