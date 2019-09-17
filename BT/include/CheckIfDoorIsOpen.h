#ifndef CHECKIFDOORISOPEN_H
#define CHECKIFDOORISOPEN_H
#include "World.h"
#include "Node.h"

class CheckIfDoorIsOpen : public Node {  // Each task will be a class (derived from Node of course).
	private:
		DoorStatus* status;
	public:
		CheckIfDoorIsOpen (DoorStatus* status) : status(status) {}
		virtual bool run() override {
			if (status->doorIsOpen == true)
				std::cout << "The person sees that the door is open." << std::endl;  // will return true
			else
				std::cout << "The person sees that the door is closed." << std::endl;  // will return false
			return status->doorIsOpen;
		}
};
#endif // CHECKIFDOORISOPEN_H
