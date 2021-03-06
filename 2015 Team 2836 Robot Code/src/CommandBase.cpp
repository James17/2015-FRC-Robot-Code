#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/ToteMagnet.h"
#include "Subsystems/Claw.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
DriveTrain* CommandBase::drivetrain = NULL;
ToteMagnet* CommandBase::totemagnet = NULL;
Claw* CommandBase::claw = NULL;
CameraControl*CommandBase::cameracontrol = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	claw = new Claw();
	oi = new OI();
	drivetrain = new DriveTrain();
	totemagnet = new ToteMagnet();
	cameracontrol = new CameraControl();
}
