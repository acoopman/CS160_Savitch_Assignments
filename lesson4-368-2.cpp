// Section CSC160 - Computer Science I: C++

// File Name:lesson4-368-2 

// Student:Aidan Coopman

// Homework Number:lesson 4 #2

// Description:

// Last Changed:



#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main( )
{
  
  ifstream inStream;
  ofstream outStream;
  char inFileName[16];
  double sum=0;
  double next;
  int count=0;
  
  cout << "Enter the input file name (15 charactors or less)\n";
  cin >> inFileName;
  
  //open input stream and check if it openned succesfully
  inStream.open(inFileName);
  if (inStream.fail())
    {
      cout << "Input file opening failed.\n";
      exit(1);
    }
  
  //add up all the numbers
  while (inStream >> next)
    {
      sum = sum + next;
      count++;
    }
    
    //make sure there were numbers in the file
  if (count > 0)
    {
      cout << "The average of " << count << " numbers is " << sum/(static_cast<double>(count)) << endl;
    }
  else
    {
      cout << "There were no numbers in the input file\n";
    }
    
  //close the stream
  inStream.close();
  
  return 0;
  
}
