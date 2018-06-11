#include "Wrist.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "AnalogPotentiometer.h"
#include "Victor.h"

Wrist::Wrist() : PIDSubsystem("Wrist", 1.0, 0.0, 0.0) {
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();
    SetAbsoluteTolerance(0.2);
    GetPIDController()->SetContinuous(false);
    frc::LiveWindow::GetInstance()->AddActuator("Wrist", "PIDSubsystem Controller", GetPIDController());
    pot.reset(new frc::AnalogPotentiometer(0, 1.0, 0.0));
    lw->AddSensor("Wrist", "pot", pot);

    motor.reset(new frc::Victor(1));
    lw->AddActuator("Wrist", "motor", std::static_pointer_cast<frc::Victor>(motor));
}

double Wrist::ReturnPIDInput() {
        return pot->Get();
}

void Wrist::UsePIDOutput(double output) {
    motor->PIDWrite(output);
}

void Wrist::InitDefaultCommand() {
}
