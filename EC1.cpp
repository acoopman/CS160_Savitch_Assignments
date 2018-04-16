// Section CSC160 - Computer Science I: C++

// File Name: EC1.cpp

// Student:Aidan Coopman

// Homework Number: EC

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
  
{
  const int N = 500;
  double array[N];
  int count = 0;
  double d;
  double sum = 0;
  double avg;
  
  //enter in values into the array calculate the average as we go
  while(cin >> d)
    {
      array[count++] = d;	
      sum+= d;
      
      if (count == N)
	    break;	
    }
  
  //cant divide by zero
  if(count == 0)
    {
      cout << "No values were entered\n";
      exit(1);
    }
    
  //get the average
  avg = sum/(double)count;
  cout << "average is " << avg << endl;
  
  //search through the array for matches to the average
  int matches=0;
  for(int i = 0; i < count; i++)
    {
      if(avg == array[i])
	    matches++;
    }
  
  cout << "There are " << matches << " matches found in the array\n";
  
  return 0;
}
