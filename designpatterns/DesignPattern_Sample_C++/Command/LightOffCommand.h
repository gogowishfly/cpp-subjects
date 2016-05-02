#ifndef	_COMMAND_LIGHTOFFCOMMAND_H_
#define _COMMAND_LIGHTOFFCOMMAND_H_

#include "Command.h"
#include "Light.h"

namespace COMMAND
{
	// Command for turning off the light
	class LightOffCommand : public Command
	{
	public:
		LightOffCommand(Light* light) : mLight() {}

		void execute()
		{
			mLight->off();
		}

	private:
		Light* mLight;
	};
}

// namespace COMMAND
#endif