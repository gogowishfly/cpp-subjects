#ifndef	_COMMAND_LIGHT_H_
#define _COMMAND_LIGHT_H_

#include <iostream>

namespace COMMAND
{
	using namespace std;

	// Receiver Class
	class Light
	{
	public:
		void on()
		{
			cout << "The light is on\n" ;
		}

		void off()
		{
			cout << "The light is off\n";
		}
	};
}

// namespace COMMAND
#endif