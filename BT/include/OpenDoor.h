#ifndef OPENDOOR_H
#define OPENDOOR_H
#include "World.h"
#include "Node.h"


class OpenDoor : public Node {  // Each task will be a class (derived from Node of course).
	private:
		DoorStatus* status;
	public:
		OpenDoor (DoorStatus* status) : status(status) {}
		virtual bool run() override {
			if (status->distanceToDoor > 0){
				std::cout << "The door is too far." << std::endl;
				return false;
            }
            else {
				std::cout << "The person opened the door." << std::endl;
				status->doorIsOpen = true;
				return true;
            }
		}
};
#endif // OPENDOOR_H
