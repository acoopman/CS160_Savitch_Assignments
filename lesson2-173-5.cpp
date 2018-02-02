// Section CSC160 - Computer Science I: C++

// File Name: Lesson2-173-5

// Student:Aidan Copman

// Homework Number: lesson 2 #5

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
{
  cout << "The prime numbers are: \n";
  int prime = 1;
  
  //go thru numbers 3-100 to see if they are prime
  for (int i = 3; i<100; i++)
    {
      prime = 1;
      //this interloop checks all the previous numbers
      //before i to see if they are divisable
      for(int j=2; j<(i); j++)
	{
	  if((i%j) == 0)
	    {
	      prime = 0;
	    }
	}
      if(prime == 1)
	{
	  cout << i << endl;
	}
    }
  
    return 0;
}
