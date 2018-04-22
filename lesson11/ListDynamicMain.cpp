// Section CSC160 - Computer Science I: C++

// File Name: listDynamicMain.cpp

// Student: Aidan Coopman

// Homework Number:lesson 11 #10

// Description:

// Last Changed:

#include <iostream>
#include <cstdlib>
#include "ListDynamic.h"

using namespace std;

//---------------------------------------------------------------------------
int main( )
{
  try
    {
      List      testList; 
      const int TEST_COUNT = 70;
      double    temp;
      
      //lets add in values, the start buffer size is 50 so adding in 70 values 
      //will make the List class reallocate
      for (int i = 0; i < TEST_COUNT; i++)
    	{
	      testList.addValue(i);
    	}
      
      // Exercise member functions
      cout << "\n\nThere are " << testList.getSize() << " values on the list";
      cout << "\nThe first value on the list is "    << testList.getValue(0);
      cout << "\nThe last value on the list is "     << testList.getLast();
      
      testList.deleteLast();
      cout << "\nAfter deleting last value, there are " << testList.getSize() << " values left";
      cout << "\nThe new list is:\n"                    << testList;
      
      cout << "\n\nList filled up at size equal to " << testList.getSize();
      
    }
  catch(int e)
    {
      cout << "An exception was thrown with value " << e << endl;
    }
  return 0;
}
//---------------------------------------------------------------------------




