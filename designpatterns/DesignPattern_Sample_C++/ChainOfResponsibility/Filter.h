#ifndef	_CHAINOFRESPONSIBILITY_FILTER_H_
#define _CHAINOFRESPONSIBILITY_FILTER_H_

#include "PhotoProcessor.h"

namespace CHAINOFRESPONSIBILITY
{
	class Filter : public PhotoProcessor
	{
	private:
		void processImpletation(Photo &ph)
		{
			cout << "Applying filters\n";
		}
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif