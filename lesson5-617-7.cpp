// Section CSC160 - Computer Science I: C++

// File Name:lesson5_617_7

// Student:Aidan Coopman

// Homework Number:lesson 6 #5

// Description:

// Last Changed:



#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//--------------------------------------------------------------------
//--------------------------------------------------------------------
//decalring a class
class Rational
{
  
public :
  
  //constructors and destructor
  Rational();
  Rational(int x, int y=1);
  ~Rational();
  
  //member functions add(), sub(), mul(), div(), less(), eq(), and neq().
  Rational add(Rational & in);
  Rational sub(Rational & in);
  Rational mult(Rational & in);
  Rational div(Rational & in);
  bool     less(Rational & in);
  Rational neg();
  bool     eq(Rational & in);
  
  //a member function to return the current numerator and denominator.
  int get_num();
  int get_den();
  
  //a member function that accepts an argument of type ostream that writes the fraction to that open output stream.
  void print(ostream & out);
  
private :
  //a private member variables to hold the numerator and denominator values
  int num;
  int den;
  void reduce(); 
};

//------------------------------------------------------------------------

int main( )
{
  Rational num1(3,16);
  Rational num2(4,9);
  Rational out;
  
  cout << "Test 1 for adding:\n";
  out = num1.add(num2);
  num1.print(cout);
  cout << " + \n";
  num2.print(cout);
  cout << " = \n";
  out.print(cout);
  
  cout << "Test 2 for subtraction\n";
  out = num1.sub(num2);
  num1.print(cout);
  cout << " - \n";
  num2.print(cout);
  cout << " = \n";
  out.print(cout);
  
  cout << "Test 3 for multiplying:\n";
  out = num1.mult(num2);
  num1.print(cout);
  cout << " * \n";
  num2.print(cout);
  cout << " = \n";
  out.print(cout);
  
  cout << "Test 4 for dividing:\n";
  out = num1.div(num2);
  num1.print(cout);
  cout << " / \n";
  num2.print(cout);
  cout << " = \n";
  out.print(cout);
  
  cout << "Test 5 for negative:\n";
  out = num1.neg();
  num1.print(cout);
  cout << " (negate) \n";
  cout << " = \n";
  out.print(cout);
  
  cout << "Test 6 for eq:\n";
  bool is_equal = num1.eq(num2);
  num1.print(cout);
  cout << " ?= \n";
  num2.print(cout);
  cout << " is \n";
  if(is_equal) cout << "True\n";
  else         cout << "False\n";
  
  cout << "Test 7 for less:\n";
  bool is_less = num1.less(num2);
  num1.print(cout);
  cout << " < \n";
  num2.print(cout);
  cout << " is \n";
  if(is_less == 0) cout << "False\n";
  else             cout << "True\n";
  
  return 0;
  
}
//define the function of the class
//----------------------------------------------------------
// default constructor

Rational::Rational()
{
  num = 0;
  den = 1;
  reduce();
}
//----------------------------------------------------------
//destructor
Rational::~Rational()
{
  
}
//----------------------------------------------------------
//an overloaded constructor that accepts two values for an initial fraction
Rational::Rational(int x, int y)
{
  //make sure the output is not negitive ... 
  //Teacher's instruction:
  //Do not let either numerator or denominator stored value go negative. Display an error
  // message on the user terminal if any of member functions try to force a negative count value.
  //Textbook says: page 617 "Let any sign be carried by the numerator; keep the denominator postitive."
  //this subtracts the only one that can be negitive so im handling it here and making sure the input is positive
  //Do not let either numerator or denominator stored value go negative. 
  if(x < 0) x = -x;
  if(y < 0) y = -y;
  
  num = x;
  den = y;
  reduce();
}
//-----------------------------------------------------------
Rational Rational::add(Rational & in)
{
  Rational out;
  
  int a = num;
  int b = den;
  int c = in.num;
  int d = in.den;
  
  out.num = (a*d)+(b*c);
  out.den = b*d;
  
  out.reduce();
  return out;
}
//------------------------------------------------------------
void Rational::print(ostream & out)
{
  out << num << "/" << den<< endl;
}
//------------------------------------------------------------
Rational Rational::sub(Rational & in)
{
  Rational out;
  
  int a = num;
  int b = den;
  int c = in.num;
  int d = in.den;
  
  out.num = (a*d)-(b*c);
  out.den = b*d;
  
  //make sure the output is not negitive ... 
  //Teacher's instruction:
  //Do not let either numerator or denominator stored value go negative. Display an error
  // message on the user terminal if any of member functions try to force a negative count value.
  //Textbook says: page 617 "Let any sign be carried by the numerator; keep the denominator postitive."
  //this subtracts the only one that can be negitive so im handling it here and making sure the input is positive
  if((out.num < 0)&&(out.den<0))
    {
      out.num= -out.num;
      out.den= -out.den;
    }
  else if(out.num<0)
    cout << "Error, numerator is negitive\n";
  else if(out.den<0)
    cout << "Error, denominator is negitive\n";
  else;
  
  out.reduce();
  return out;
}
//------------------------------------------------------------
Rational Rational::mult(Rational & in)
{
  Rational out;
  
  int a = num;
  int b = den;
  int c = in.num;
  int d = in.den;
  
  out.num = a*c;
  out.den = b*d;

  out.reduce();  
  return out;
}
//------------------------------------------------------------
Rational Rational::div(Rational & in)
{
  Rational out;
  
  int a = num;
  int b = den;
  int c = in.num;
  int d = in.den;
  
  out.num = a*d;
  out.den = c*b;
  
  out.reduce();
  return out;
}
//------------------------------------------------------------
Rational Rational::neg()
{
  Rational out;
  
  int a = num;
  int b = den;
  
  out.num = -a;
  out.den = b;
  
  out.reduce();
  return out;
}
//------------------------------------------------------------
bool Rational::eq(Rational & in)
{
  bool is_equal = 0;
  
  int a = num;
  int b = den;
  int c = in.num;
  int d = in.den;
  
  if( (b*c) == (a*d))
    is_equal = 1;
  
  return is_equal;
}
//------------------------------------------------------------
int Rational::get_num()
{
  return num;
}
int Rational::get_den()
{
  return den;
}
//------------------------------------------------------------
bool Rational::less(Rational & in)
{
    int a = num;
    int b = den;
    int c = in.num;
    int d = in.den;
    bool is_less = 0; //not less than
      
    if( (a*d) < (c*b))
	  is_less = 1; //true
      
    return is_less;
}
//------------------------------------------------------------
void Rational::reduce()
{
  int count;
  
  //find the gcd between the num and den and divide by it
  if(num<den)
    count = num;
  else
    count = den;
  
  for(int i = count; i>0; i--)
    {
      if(((num%i) == 0)&&((den%i) == 0))
	 {
	  num = num/i;
	  den = den/i;
	  break;
	 }
    }
  
}
