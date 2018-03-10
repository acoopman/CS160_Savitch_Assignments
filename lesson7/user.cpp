#include <iostream>
using namespace std;

namespace 
{
string username;
bool isValid();
}
namespace Authenticate
{
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}
	string getUserName()
	{
		return username;
	}
}

namespace 
{
	//returns 1 if username contains exactly 8 letters
	bool isValid()
	{
		char ch;
		int length = username.length();
		
		//check the length to make sure its exactly 8
		if(length !=8)
		{
		cout << "Length has to be 8 and entered was " << length << endl;	
		return 0;
	}
	    //make sure each charactor entered in is in the alphabet
	    for (int i =0; i< length; i++)
	    {
	    	ch = username[i];
		   if(isalpha(ch) ==0)
		     return 0;
		}		
		return 1;
	}
}
