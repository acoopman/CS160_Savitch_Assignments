// Section CSC160 - Computer Science I: C++

// File Name: lesson4-373-10

// Student: Aidan Coopman

// Homework Number:lesson 4 #10

// Description:

// Last Changed:

 

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main( )
{
	//declare varibles
  ifstream inFile;
  int rank;
  string male;
  string female;
  string name;  
  int male_rank=-1;
  int female_rank=-1;
  string input_name;
  
  //open input stream and check if it openned succesfully
  inFile.open("babynames2012.txt");
  if (inFile.fail())
    {
      cout << "Input file opening failed.\n";
      exit(1);
    }
  
  cout << "Enter in the name you are searching for\n";
  cin >> input_name;
  
  //search through all the names for the inputed names in the file ----------
  for(int i=0;i<1000;i++)
  {
    inFile >> rank;
    inFile >> male;
    inFile >> female;
    if(input_name == male)
      {
    	male_rank = rank;
      }
    if(input_name == female)
      {
    	female_rank=rank;
      }
  }//-------------------------------------------------------------------------
  
  //Report the findings to the user
  //if the name is not found in the top 1000 names the output will be -1
  if(male_rank == -1)
    {
      cout << "The name " << input_name << " was not found on the top 1000 baby names for males\n";
    }
  //if it is found in the top 1000 then:
  else
    {
      cout << input_name << " is ranked #" << male_rank << " amoung males.\n";
    }
  if(female_rank == -1)
    {
      cout << "The name " << input_name << " was not found on the top 1000 baby names for females\n";
    }
  else
    {
      cout << input_name << " is ranked #" << female_rank << " amoung females.\n";
    }
  
  //close the stream 
  inFile.close();
  
  return 0;
}
