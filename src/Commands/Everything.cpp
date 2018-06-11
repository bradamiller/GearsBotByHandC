#include "Everything.h"
#include "Commands/PrepareToGrab.h"
#include "Commands/Grab.h"
#include "Commands/DriveForward.h"
#include "Commands/PlaceSoda.h"

Everything::Everything() {
	AddSequential(new PrepareToGrab());
    AddSequential(new Grab());
    AddSequential(new DriveForward());
    AddSequential(new PlaceSoda());
}
