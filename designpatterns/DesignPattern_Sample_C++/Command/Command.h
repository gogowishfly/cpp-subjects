#ifndef	_COMMAND_COMMAND_H_
#define _COMMAND_COMMAND_H_

#include <iostream>

namespace COMMAND
{
	// Command Interface
	class Command
	{
	public:
		virtual ~Command() = 0 {} 
		virtual void execute() = 0;
	};
}
 // namespace COMMAND
#endif