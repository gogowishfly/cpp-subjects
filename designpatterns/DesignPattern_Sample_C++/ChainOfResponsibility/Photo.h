#ifndef	_CHAINOFRESPONSIBILITY_PHOTO_H_
#define _CHAINOFRESPONSIBILITY_PHOTO_H_

#include <iostream>
#include <string>

namespace CHAINOFRESPONSIBILITY
{
	using namespace std;

	class Photo
	{
	public:
		Photo(string str) : m_title(str)
		{
			cout << "Processing " << m_title << " ...\n";
		}

	private:
		string m_title;
	};
}

// namespace CHAINOFRESPONSIBILITY
#endif