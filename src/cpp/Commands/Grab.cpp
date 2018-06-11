#include "Grab.h"
#include "Commands/CloseGripper.h"
#include "Commands/ElevatorMove.h"
#include "Commands/WristMove.h"

Grab::Grab() {
    AddSequential(new CloseGripper());
    AddParallel(new ElevatorMove(2.7));
    AddParallel(new WristMove(4.1));
}
