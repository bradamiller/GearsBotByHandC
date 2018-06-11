#include "ElevatorMove.h"

ElevatorMove::ElevatorMove(double setpoint): Command() {
    m_setpoint = setpoint;
	Requires(Robot::elevator);
}

void ElevatorMove::Initialize() {
    Robot::elevator->Enable();
    Robot::elevator->SetSetpoint(m_setpoint);
}

bool ElevatorMove::IsFinished() {
    return Robot::elevator->OnTarget();
}
