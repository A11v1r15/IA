#include <iostream>
using namespace std;

#include "./include/Node.h"
#include "./include/Composites/Sequence.h"
#include "./include/Composites/Selector.h"
#include "./include/Decorators/Root.h"
#include "./include/World.h"
#include "./include/CheckIfDoorIsOpen.h"
#include "./include/ApproachDoor.h"
#include "./include/OpenDoor.h"

int main() {

	DoorStatus* doorStatus = new DoorStatus {false, false, 5};  // The door is initially closed and 5 meters away.

    //Behaviour Tree instances
	Root *root = new Root;
	//Sequence *sequence1 = new Sequence;  // Note that root can be either a Sequence or a Selector, since it has only one child.
	Selector* selector1 = new Selector;  // In general there will be several nodes that are Sequence or Selector, so they should be suffixed by an integer to distinguish between them.
    CheckIfDoorIsOpen *checkdoor = new CheckIfDoorIsOpen(doorStatus);
    Sequence* sequence1 = new Sequence;

	//building the BT
	root->addChild (selector1);
	selector1->addChild (checkdoor);
	selector1->addChild (sequence1);
	sequence1->addChild (new ApproachDoor(doorStatus));
	sequence1->addChild (new OpenDoor(doorStatus));

	//executing
	int tick = 0;
	do
    {
        cout << "-------------------- Tick " << tick <<  " --------------------"<< endl;
		tick++;
    }while (!root->run());
	cout << endl << "Operation complete.  Behaviour tree exited." << endl;
	cin.get();
}
