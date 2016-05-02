#ifndef	_CHAINOFRESPONSIBILITY_COLORMATCH_H_
#define _CHAINOFRESPONSIBILITY_COLORMATCH_H_

#include "PhotoProcessor.h"

namespace CHAINOFRESPONSIBILITY
{
	class ColorMatch : public PhotoProcessor
	{
	private:
		void processImpletation(Photo &ph)
		{
			cout << "Matching colors\n";
		}
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif