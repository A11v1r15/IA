#include <iostream>
#include "StateSleep.h"
#include "StateEating.h"
#include "Troll.h"

using namespace std;

int main(){
    bool loop = true;
    //StateSleep sleep;
    //StateEating  eat;
    Troll troll(StateSleep::GetInstance());
    troll.Update();
    while(loop){
        char q;
        cout << "Pressione 1 para trocar de estado" << endl;
        cout << "Pressione 0 para sair" << endl;
        cin >> q;
        if(q == '0'){
            loop = false;
        }
        troll.Update();
    }
    return 0;
}
