#ifndef OPENGRIPPER_H
#define OPENGRIPPER_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class OpenGripper: public frc::TimedCommand {
public:

OpenGripper();
	void Initialize() override;
	void End() override;
private:
};

#endif
