#ifndef	_COMMAND_LIGHTONCOMMAND_H_
#define _COMMAND_LIGHTONCOMMAND_H_

#include "Command.h"
#include "Light.h"

namespace COMMAND
{
	// Command for turning on the light
	class LightOnCommand : public Command
	{
	public:
		LightOnCommand(Light* light) : mLight() {}

		void execute()
		{
			mLight->on();
		}

	private:
		Light* mLight;
	};
}

 // namespace COMMAND
#endif