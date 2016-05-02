#ifndef	_COMMAND_FANOFFCOMMAND_H_
#define _COMMAND_FANOFFCOMMAND_H_

#include "Command.h"
#include "Fan.h"

namespace COMMAND
{
	using namespace std;

	// Receiver Class
	class FanOffCommand : public Command
	{
	public:
		FanOffCommand(Fan *fan) : mFan(fan) {}

		void execute()
		{
			mFan->off();
		}

	private:
		Fan* mFan;
	};
}

// namespace COMMAND
#endif