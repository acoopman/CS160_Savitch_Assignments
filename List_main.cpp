// Section CSC160 - Computer Science I: C++

// File Name: lesson9-699-8

// Student: Aidan Coopman

// Homework Number:lesson 9 #8

// Description:

// Last Changed:

 

#include <iostream>
#include <cstdlib>

#include "List.h"

using namespace std;

//---------------------------------------------------------------------------
int main( )
{
  List testList;
  
  //teachers test case:
  const int TEST_COUNT = 7;
  double temp;
  
  cout << "Enter " << TEST_COUNT << " numbers\n";
  for (int i = 0; i < TEST_COUNT; i++)
    {
      cout << "Enter Value: ";
      cin >> temp;
      
      testList.addValue(temp);
    }
    
  // Exercise member functions
  cout << "\n\nThere are " << testList.getSize() << " values on the list";
  cout << "\nThe first value on the list is "    << testList.getValue(0);
  cout << "\nThe last value on the list is "     << testList.getLast();
  
  testList.deleteLast();
  cout << "\nAfter deleting last value, there are " << testList.getSize() << " values left";
  cout << "\nThe new list is:\n"                    << testList;
  
  while (!testList.full())
    {
      testList.addValue(100.0);
    }
  
  cout << "\n\nList filled up at size equal to " << testList.getSize();
  
  return 0;
}
//---------------------------------------------------------------------------




