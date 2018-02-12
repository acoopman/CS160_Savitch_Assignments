// Section CSC160 - Computer Science I: C++

// File Name: lesson4-369-5

// Student:Aidan Coopman

// Homework Number:lesson 4 #5

// Description:

// Last Changed:

 

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//declare functions ---------------------------------------------------------
void read_advice(ifstream& in);
void enter_advice(ofstream& outFile);

//----------------------------------------------------------------------------
int main( )
{
  
  ifstream inFile;
  ofstream outFile;
  
  //open input stream and check if it openned succesfully
  inFile.open("advice.txt");
  if (inFile.fail())
    {
      cout << "Input file opening failed.\n";
      exit(1);
    }
  
  //Step 1:
  //tell the user what the program is going to do. and tell them their advice
  cout << "PROGRAMMING ORACLE\n";
  cout << "\n";
  cout << "I will write programming advice to the screen. To repay me for\n";
  cout << "sharing my wisdom, you can either remit a large sum of money\n";
  cout << "to your instructor, or you can enter another piece of sage preogramming\n";
  cout << "advice for my continued edification.\n";
  cout << "Here is your advice:\n\n";
  
  //call the function to read off the advice
  read_advice(inFile);
  
  //close the file so we can open it and overwrite it
  inFile.close();
  
  //Step 2:
  //open the advice file so the user can write to it
  outFile.open("advice.txt");
  if (outFile.fail())
    {
      cout << "Output file opening failed.\n";
      exit(1);
    }
  //tell the user to enter their advice in
  cout << "Please enter your advice now. Your advice may be as long\n";
  cout << "as you need, but please indicate the end of the input\n";
  cout << "by pressing <cr> twice.\n\n";
  
  enter_advice(outFile);
  
  //close the file
  outFile.close();
  
  cout << "Thank you for your advice.";
  return 0;
  
}

//function definitions --------------------------------------------------------------
void enter_advice(ofstream& outFile)
{
  int keep_going=1;
  int count=0;
  char in_char;
  cin.get(in_char);
  
  while(keep_going)
    {
      if(in_char == '\n')  
    	count++;
      else
    	count = 0;
      
      outFile << in_char;
      
      if(count == 2)      
    	keep_going=0; 
      else
    	cin.get(in_char);
    }	
}

//------------------------------------------------------------------------------------
void read_advice(ifstream& in)
{
  char next;
  in.get(next);
  while (! in.eof())
    {
      cout << next;
      in.get(next);
    }
}
