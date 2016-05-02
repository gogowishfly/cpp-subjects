#ifndef	_COMMAND_NULLCOMMAND_H_
#define _COMMAND_NULLCOMMAND_H_

#include "Command.h"

namespace COMMAND
{
	using namespace std;

	class NullCommand : public Command
	{
	public:
		void execute()
		{
			cout << "Null command: does nothing\n";
		}
	};
}

// namespace COMMAND
#endif