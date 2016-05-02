#ifndef	_CHAINOFRESPONSIBILITY_SCALE_H_
#define _CHAINOFRESPONSIBILITY_SCALE_H_

#include "PhotoProcessor.h"

namespace CHAINOFRESPONSIBILITY
{
	class Scale : public PhotoProcessor
	{
	public:
		Scale(int s) : m_SCALE(0) {} 

	private:
		void processImpletation(Photo &ph)
		{
			cout << "Scaling photo\n";
		}


	private:
		int m_SCALE;
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif