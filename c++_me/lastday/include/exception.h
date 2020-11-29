#include<string>
using namespace std;
namespace NException{

class Exception{

private:
	string message;
	string filename;
	int linenumber;
public:
	Exception(const string message=" ",const string filename=" ",const int linenumber = 0);

const string& getFileName();
 const string& getMessage();
int getLineNumber();

};
}
