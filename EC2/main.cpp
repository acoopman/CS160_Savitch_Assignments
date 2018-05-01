// Section CSC160 - Computer Science I: C++

// File Name: 

// Student:

// Homework Number:

// Description:

// Last Changed:

 

#include <iostream>
#include <string.h>
#include "member.h"
using namespace std;

int main( )
{
const int NUM_MEMBERS = 5;
Member members[NUM_MEMBERS];

members[0].set_name("huey");
members[0].set_age(10);
members[0].set_sex("m");
members[1].set_name("duey");
members[1].set_age(11);
members[1].set_sex("m");
members[2].set_name("luey");
members[2].set_age(12);
members[2].set_sex("m");
members[3].set_name("donald");
members[3].set_age(13);
members[3].set_sex("?");
members[4].set_name("hillary");
members[4].set_age(14);
members[4].set_sex("f");

cout << "name| |age||sex\n";
for(int i =0; i< NUM_MEMBERS; i++)
cout << members[i] << endl;
//-------------------------------------------------
//I did not know how to sort strings so I looked on the web and found this:
//https://codescracker.com/cpp/program/cpp-program-sort-string.htm
for(int i=1; i<NUM_MEMBERS; i++)
	{
		for(int j=1; j<NUM_MEMBERS; j++)
		{
			if(strcmp(members[j-1].get_name().c_str(), members[j].get_name().c_str())>0)
			{
               swap(members[j-1] , members[j]);
			}
		}
	}

cout << "------------------\n";
cout << "SORTED:\n";
for(int i =0; i< NUM_MEMBERS; i++)
cout << members[i] << endl;

    return 0;

}
