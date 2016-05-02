#ifndef	_COMMAND_REMOTECONTROL_H_
#define _COMMAND_REMOTECONTROL_H_

#include "LightOffCommand.h"
#include "LightOnCommand.h"


namespace COMMAND
{
	// Invoker 
	// Stores the ConcreteCommand object 
	class RemoteControl
	{
	public:
		void setCommand(Command *cmd)
		{
			m_command = cmd;
		}
		
		void execureCommand()
		{
			m_command->execute();
		}

	private:
		Command* m_command;

	};
}

// namespace COMMAND
#endif