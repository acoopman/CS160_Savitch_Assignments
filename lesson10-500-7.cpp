// Section CSC160 - Computer Science I: C++

// File Name: lesson10-500-7.cpp

// Student:   Aidan Coopman

// Homework Number:  lesson 10 #7

// Description:

// Last Changed:

#include <iostream>
#include <cctype>
#include <string>

using namespace std;  

//this function takes a first and last name and returns a string of
//pig latin of it
string pig_latin(const string & first, const string & last);

int main( )
{
  string first;
  string last;

  //get the user to enter in his first and last name
  cout << "Enter in first name\n";
  cin >> first;
  cout << "Enter in last name\n";
  cin >> last;

  //call the function to convert the names
  string out = pig_latin(first, last);
  cout << "Your name in pig latin is: " << out << endl;

  return 0;
}
//---------------------------------------------------------------------------
string pig_latin(const string & first, const string & last)
{
  //step 1: convert name strings to lower case
  string pig_first(first);
  string pig_last(last);

  for (int i=0; i< first.length(); i++)
    pig_first[i] = tolower(first[i]);
  
  for (int i=0; i< last.length(); i++)
    pig_last[i] = tolower(last[i]);

  //get the first character of each name
  char t1 = pig_first[0];
  char t2 = pig_last[0];

  //first name -----------------------------------------------------------
  if((t1 == 'a')||(t1 == 'e')||(t1 == 'i')||(t1 == 'o')||(t1 == 'u'))
    {
      pig_first = pig_first + "way";
    }
  else
    {
      char temp = pig_first[0];
      for(int i=1; i< pig_first.length(); i++)
	{
	  pig_first[i-1]=pig_first[i];
	}
      pig_first[pig_first.length()-1] = temp;
      pig_first = pig_first + "ay";
    }
  
  //last name -----------------------------------------------------------
  if((t2 == 'a')||(t2 == 'e')||(t2 == 'i')||(t2 == 'o')||(t2 == 'u'))
    {
      pig_last = pig_last + "way";
    }
  else
    {
      char temp = pig_last[0];
      for(int i=1; i< pig_last.length(); i++)
	{
	  pig_last[i-1]=pig_last[i];
	}
      pig_last[pig_last.length()-1] = temp;
      pig_last = pig_last + "ay";
    }
   
  //make the first letter of both last and first capital
  pig_first[0] = toupper(pig_first[0]);
  pig_last[0] = toupper(pig_last[0]);
  
  string out = pig_first + " " + pig_last;
  
  return out;
}





