#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//using namespace Authenticate;
using namespace std;

//#include "user.h"
namespace Authenticate
{
  void   inputUserName();
  string getUserName();
  void inputPassword();
  string getPassword();

}

using namespace Authenticate;

int main(int argc, char** argv) 
{
   inputUserName();
   inputPassword();
   cout << "Your username is " << getUserName() <<
           " and your password is: " << getPassword() << endl;

	return 0;
}
