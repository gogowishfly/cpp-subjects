// Command.cpp : Defines the entry point for the console application.
//

#include "RemoteControl.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "RemoteControlRevised.h"
#include "FanOffCommand.h"
#include "FanOnCommand.h"


int main()
{
	using namespace COMMAND;

	//Reciever
	Light *light = new Light;

	// concrete Command objects 
	LightOnCommand *lightOnCommand = new LightOnCommand(light);
	LightOffCommand *lightOffCommand = new LightOffCommand(light);

	//invoker
	RemoteControl *remoteControl = new RemoteControl;

	//execute
	remoteControl->setCommand(lightOnCommand);
	remoteControl->execureCommand();

	remoteControl->setCommand(lightOffCommand);
	remoteControl->execureCommand();

	Fan *fan = new Fan;
	FanOnCommand *fanOn = new FanOnCommand(fan);
	FanOffCommand *fanOff = new FanOffCommand(fan);
	NullCommand *nullOn = new NullCommand();
	NullCommand *nullOff = new NullCommand();
	// invoker objects
	RemoteControlRevised *control = new RemoteControlRevised;


	// execute
	control->setCommand(LIGHT, lightOnCommand, lightOffCommand);
	control->onButtonPressed(LIGHT);
	control->offButtonPressed(LIGHT);

	control->setCommand(FAN, fanOn, fanOff);
	control->onButtonPressed(FAN);
	control->offButtonPressed(FAN);

	control->setCommand(NONE, nullOn, nullOff);
	control->onButtonPressed(NONE);

	delete light, lightOnCommand, lightOffCommand, remoteControl;
	delete control, fanOn, fanOff, nullOn, nullOff;

	getchar();
    return 0;
}

