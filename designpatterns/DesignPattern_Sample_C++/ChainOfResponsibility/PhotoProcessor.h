#ifndef	_CHAINOFRESPONSIBILITY_PHOTOPROCESSOR_H_
#define _CHAINOFRESPONSIBILITY_PHOTOPROCESSOR_H_

#include "Photo.h"

namespace CHAINOFRESPONSIBILITY
{
	class PhotoProcessor
	{
	public:
		PhotoProcessor() : m_NextProcessor(0) {}
		virtual ~PhotoProcessor() {}

		void process(Photo &ph)
		{
			processImpletation(ph);
			if (0 != m_NextProcessor)
			{
				m_NextProcessor->process(ph);
			}
		}

		void setNextProcessor(PhotoProcessor *p)
		{
			m_NextProcessor = p;
		}


	protected:
		virtual void processImpletation(Photo &ph) = 0;

	private:
		PhotoProcessor* m_NextProcessor;
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif