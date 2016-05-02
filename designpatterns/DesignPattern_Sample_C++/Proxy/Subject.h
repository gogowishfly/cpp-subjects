#ifndef	_PROXY_SUBJECT_H_
#define _PROXY_SUBJECT_H_

#include <iostream>

namespace PROXY
{
	using namespace std;
	class Subject
	{
	public:
		virtual void request() = 0;
		virtual ~Subject() {}
	};

	class RealSubject : public Subject
	{
	public:
		void request() 
		{
			cout << "RealSubject.request()" << endl;
		}
	};

	class Proxy : public Subject
	{
	private:
		Subject* realSubject;

	public:
		Proxy() : realSubject(new RealSubject())
		{}

		~Proxy()
		{
			delete realSubject;
		}

		// Forward calls to the RealSubject:
		void request() 
		{
			realSubject->request();
		}

	};

} // namespace PROXY

#endif