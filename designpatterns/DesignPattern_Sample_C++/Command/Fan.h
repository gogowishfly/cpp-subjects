#ifndef	_COMMAND_FAN_H_
#define _COMMAND_FAN_H_

#include <iostream>

namespace COMMAND
{
	using namespace std;

	// Receiver Class
	class Fan
	{
	public:
		void on()
		{
			cout << "The fan is on\n";
		}

		void off()
		{
			cout << "The fan is off\n";
		}
	};
}

// namespace COMMAND
#endif