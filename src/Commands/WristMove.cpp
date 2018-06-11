#include "WristMove.h"

WristMove::WristMove(double setpoint): Command() {
    m_setpoint = setpoint;
	Requires(Robot::wrist);
}

void WristMove::Initialize() {
    Robot::wrist->Enable();
    Robot::wrist->SetSetpoint(m_setpoint);
}

bool WristMove::IsFinished() {
    return Robot::wrist->OnTarget();
}
