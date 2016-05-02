#ifndef	_CHAINOFRESPONSIBILITY_REDEYE_H_
#define _CHAINOFRESPONSIBILITY_REDEYE_H_

#include "PhotoProcessor.h"

namespace CHAINOFRESPONSIBILITY
{
	class RedEye  : public PhotoProcessor
	{
	private:
		void processImpletation(Photo &ph)
		{
			cout << "Removing red eye\n";
		}
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif