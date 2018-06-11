#include "PrepareToGrab.h"

#include "ElevatorMove.h"
#include "OpenGripper.h"
#include "WristMove.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

PrepareToGrab::PrepareToGrab() {
	AddParallel(new ElevatorMove(1.5));
    AddParallel(new OpenGripper());
    AddParallel(new WristMove(3.4));
}
