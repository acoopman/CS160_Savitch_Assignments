#include <iostream>
using namespace std;
namespace 
{
string password;
bool isValid();
}

namespace Authenticate
{
	void inputPassword()
	{
		do
		{
			cout << "Enter your password (at least 8 charactors" <<
			        " and atleast one non-letter)\n";
			        cin >> password;
		}while (!isValid());
	}
	string getPassword()
	{
		return password;
	}
}
namespace 
{
	//returns 1 if username contains exactly 8 letters
	bool isValid()
	{
		char ch;
		int count = 0;
		int length = password.length();
		
		//check the length to make sure its exactly 8
		if(length < 8)
		{
		cout << "Length has to be 8 and entered was " << length << endl;	
		return 0;
	}
	    //check to make sure we have 1 or more numbers in the password
	    for (int i =0; i< length; i++)
	    {
	    	//count the number of non-letters in the password
	    	ch = password[i];
		   if(isalpha(ch) ==0)
		     count++;
		}		
		if(count == 0 )
		return 0;
		
		return 1;
	}
}

