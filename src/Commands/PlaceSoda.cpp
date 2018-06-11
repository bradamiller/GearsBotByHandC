#include "PlaceSoda.h"
#include "Commands/WristMove.h"
#include "Commands/ElevatorMove.h"
#include "Commands/OpenGripper.h"

PlaceSoda::PlaceSoda() {
    AddSequential(new WristMove(3.4));
    AddSequential(new ElevatorMove(2.7));
    AddSequential(new OpenGripper());
}
