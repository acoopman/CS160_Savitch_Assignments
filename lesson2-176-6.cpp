// Section CSC160 - Computer Science I: C++

// File Name: lesson2-176-6

// Student: Aidan Coopman

// Homework Number: lesson 2 #6

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
{
  int initial;
  int days;
  int fib1;
  int fib2;
  int fib3;
  int fib_num;
  char try_again='Y';
  
  while((try_again == 'Y')||(try_again == 'y'))
  {
  cout << "Enter in the initial number of pounds of green crud: \n";
  cin >> initial;
  cout << "Enter the number of days the green crud has to reproduce: \n";
  cin >> days;
  
  fib_num = days/5;
  fib2 = initial;
  fib1=0; 
  for (int i = 1; i <= fib_num; i++) 
    { 
      fib3 = fib1 + fib2;
      fib1 = fib2;
      fib2 = fib3;
    }
  
  cout << "After " << days << " days, there should be " << fib3 << " pounds of green crud scumming the pond.\n";
  
  cout << "Do you want to go again? Enter 'Y/y' or 'N/n'\n";
  cin >> try_again;
}
  return 0;
}
