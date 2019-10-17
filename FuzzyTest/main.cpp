#include <iostream>
#include "./include/FuzzyModule.h"

using namespace std;

int main()
{
    FuzzyModule fm;

    FuzzyVariable& DistToTarget = fm.CreateFLV("DistToTarget");

    FzSet Target_Close = DistToTarget.AddLeftShoulderSet("Target_Close",0,25,150);
    FzSet Target_Medium = DistToTarget.AddTriangularSet("Target_Medium",25,50,300);
    FzSet Target_Far = DistToTarget.AddRightShoulderSet("Target_Far",150,300,500);

    FuzzyVariable& AmmoStatus = fm.CreateFLV("AmmoStatus");

    FzSet Ammo_Low = AmmoStatus.AddLeftShoulderSet("Ammo_Low",0,0,10);
    FzSet Ammo_Okay = AmmoStatus.AddTriangularSet("Ammo_Okay",0,10,30);
    FzSet Ammo_Loads = AmmoStatus.AddRightShoulderSet("Ammo_Loads",10,30,40);

    FuzzyVariable& Desirability = fm.CreateFLV("Desirability");

    FzSet Undesirable = Desirability.AddLeftShoulderSet("Undesirable",0,25,50);
    FzSet Desirable = Desirability.AddTriangularSet("Desirable",25,50,75);
    FzSet Very_Desirable = Desirability.AddRightShoulderSet("Very_Desirable",50,75,100);

    FzAND CloseAndLoads(Target_Close,Ammo_Loads);
    FzAND CloseAndOkay(Target_Close,Ammo_Okay);
    FzAND CloseAndLow(Target_Close,Ammo_Low);
    FzAND MediumAndLoads(Target_Medium,Ammo_Loads);
    FzAND MediumAndOkay(Target_Medium,Ammo_Okay);
    FzAND MediumAndLow(Target_Medium,Ammo_Low);
    FzAND FarAndLoads(Target_Far,Ammo_Loads);
    FzAND FarAndOkay(Target_Far,Ammo_Okay);
    FzAND FarAndLow(Target_Far,Ammo_Low);

    fm.AddRule(CloseAndLoads,Undesirable);
    fm.AddRule(CloseAndOkay,Undesirable);
    fm.AddRule(CloseAndLow,Undesirable);
    fm.AddRule(MediumAndLoads,Very_Desirable);
    fm.AddRule(MediumAndOkay,Very_Desirable);
    fm.AddRule(MediumAndLow,Desirable);
    fm.AddRule(FarAndLoads,Desirable);
    fm.AddRule(FarAndOkay,Desirable);
    fm.AddRule(FarAndLow,Undesirable);


    double dist = 30;
    double ammo = 40;

    fm.Fuzzify("DistToTarget",dist);
    fm.Fuzzify("AmmoStatus",ammo);

    cout << fm.DeFuzzify("Desirability",FuzzyModule::max_av) << endl;

    return 0;

}
