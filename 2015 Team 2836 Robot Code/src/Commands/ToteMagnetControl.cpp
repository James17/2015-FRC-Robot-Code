#include "ToteMagnetControl.h"

ToteMagnetControl::ToteMagnetControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(totemagnet);
}

// Called just before this Command runs the first time
void ToteMagnetControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ToteMagnetControl::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToteMagnetControl::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ToteMagnetControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToteMagnetControl::Interrupted()
{

}
