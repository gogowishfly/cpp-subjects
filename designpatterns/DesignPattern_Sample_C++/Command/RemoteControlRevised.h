#ifndef	_COMMAND_REMOTECONTROLREVISED_H_
#define _COMMAND_REMOTECONTROLREVISED_H_

#include "NullCommand.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include <vector>


namespace COMMAND
{
	enum Receiver
	{
		LIGHT = 0, FAN, DOOR, OVEN, NONE
	};

	// Invoker 
	// Stores the ConcreteCommand object 
	class RemoteControlRevised
	{
	public:
		RemoteControlRevised() : mOnCommand(5), mOffCommand(5)
		{
			Command *nullCommand = new NullCommand;
			for (int i = 0; i < 5; i++)
			{
				mOnCommand[i] = nullCommand;
				mOffCommand[i] = nullCommand;
			}
		}

		void setCommand(Receiver id, Command *onCmd, Command *offCmd)
		{
			mOnCommand[id] = onCmd;
			mOffCommand[id] = offCmd;
		}

		void onButtonPressed(Receiver id) 
		{
			mOnCommand[id]->execute();
		}

		void offButtonPressed(Receiver id) 
		{
			mOffCommand[id]->execute();
		}

	private:
		vector<Command*> mOnCommand;
		vector<Command*> mOffCommand;

	};
}

// namespace COMMAND
#endif