// Section CSC160 - Computer Science I: C++

// File Name:lesson7_697_2

// Student:Aidan Coopman

// Homework Number:lesson 7 #2

// Description: I programmed the problem as stated in the textbook. The overloaded operators << and >> confused me
// in the class instructions so I followed the textbook description wanting the format a/b

// Last Changed: 



#include <iostream>
#include <fstream>
#include <cstdlib>
#include "rational.h"

using namespace std;

//------------------------------------------------------------------------

int main( )
{
  //test the three constructor cases
  Rational num1(3,4);
  Rational num2(1,2);
  Rational num3(17);
  Rational out;
  Rational a;
  
  //this is from the instructions on page 697 on how these operators want to be overloaded
  cout << "Testing << and >> operators, please enter num and den in the format 'a/b'\n";
  cin >> a;
  cout << "You entered the fraction " << a << endl;
  
  out = num1+num2;
  cout << "Test 1 for adding:                   " << num1 << " + " << num2 << " = " << out << endl;
  
  out = num1-num2;
  cout << "Test 2 for subtraction:              " << num1 << " - " << num2 << " = "<< out << endl;
  
  out = num1*num2;
  cout << "Test 3 for multiplying:              " << num1 << " * " << num2 << " = "<< out << endl;
  
  out = num1/num3;  
  cout << "Test 4 for dividing:                 " << num1 << " / " << num2 << " = "<< out << endl;
  
  cout << "Test 6 for eq:                       ";
  if(num1==num2) cout << "True\n"; 
  else         cout << "False\n";
  
  cout << "Test 7 for less:                     ";
  bool is_less = (num1<num2);
  if(is_less == 0) cout << "False\n";
  else             cout << "True\n";
  
  cout << "Test 8 for greater than:             ";
  bool is_greater = (num1>num2);
  if(is_greater == 0) cout << "False\n";
  else             cout << "True\n";
  
  cout << "Test 9 for less than or equal:       ";
  bool is_less_equal = (num1<=num2);
  if(is_less_equal == 0) cout << "False\n";
  else             cout << "True\n";
  
  cout << "Test 10 for greater than or equal:   ";
  bool is_greater_equal = (num1>=num2);
  if(is_greater_equal == 0) cout << "False\n";
  else             cout << "True\n";
  
  return 0;
  
}

