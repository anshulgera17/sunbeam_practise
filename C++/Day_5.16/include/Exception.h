#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include<string>
using namespace std;

namespace NException
{
	class Exception
	{
	private:
		string message;
		string fileName;
		int lineNumber;
	public:
		Exception( const string message = 0, const string fileName = 0, const int lineNumber = 0  );

		void printStackTrace( void )const;

	};
}//end of namespace

#endif /* EXCEPTION_H_ */
