#ifndef APPROACHDOOR_H
#define APPROACHDOOR_H
#include "World.h"
#include "Node.h"


class ApproachDoor : public Node {  // Each task will be a class (derived from Node of course).
	private:
		DoorStatus* status;
	public:
		ApproachDoor (DoorStatus* status) : status(status) {}
		virtual bool run() override {
			if (status->pathObstructed == true){
				std::cout << "The path is obstructed." << std::endl;
                return false;
			}
			else {
				std::cout << "The person approaches the door." << std::endl;
				status->distanceToDoor--;
				std::cout << "The door is " << status->distanceToDoor << "m away." << std::endl;
				return true;
			}
		}
};
#endif // APPROACHDOOR_H
