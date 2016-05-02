#ifndef	_COMMAND_FANONCOMMAND_H_
#define _COMMAND_FANONCOMMAND_H_

#include "Command.h"
#include "Fan.h"

namespace COMMAND
{
	using namespace std;

	// Receiver Class
	class FanOnCommand : public Command
	{
	public:
		FanOnCommand(Fan *fan) : mFan(fan) {}

		void execute()
		{
			mFan->on();
		}

	private:
		Fan* mFan;
	};
}

// namespace COMMAND
#endif