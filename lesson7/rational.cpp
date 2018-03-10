//rational.cpp written by Aidan Coopman
#include "rational.h"

using namespace std;

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
//an overloaded constructor that accepts two values for an initial fraction
Rational::Rational(int x, int y)
{
  //Note we allow negative numbers for this assignment 
  num = x;
  den = y;
  reduce();
}
//----------------------------------------------------------
//destructor
Rational::~Rational()
{
  
}
//-----------------------------------------------------------------------
ostream &operator << (ostream & out, const Rational & c)
{
  out << c.num << "/" << c.den;
}
//------------------------------------------------------------------------
istream &operator >> (istream & in, Rational & x)
{
  char slash;
  int a,b;
  in >> a;   //num
  in >> slash;
  in >> b;   //den
  x.num = a;
  x.den = b;
  x.reduce();
}
//------------------------------------------------------------------------
Rational operator + (const Rational & in1, const Rational &in2)
{
  Rational out;
  
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  out.num = (a*d)+(b*c);
  out.den = b*d;
  
  out.reduce();
  return out;
}
//------------------------------------------------------------------------
Rational operator * (const Rational & in1, const Rational &in2)
{
  Rational out;
  
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  out.num = a*c;
  out.den = b*d;
  
  out.reduce();  
  return out;
}

//-----------------------------------------------------------
Rational operator / (const Rational & in1, const Rational &in2)
{
  Rational out;
  
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  out.num = a*d;
  out.den = c*b;
  
  out.reduce();
  return out;
}
//-----------------------------------------------------------
bool operator == (const Rational & in1, const Rational &in2)
{
  bool is_equal = 0;
  
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  if( (b*c) == (a*d))
    is_equal = 1;
  
  return is_equal;
}
//-----------------------------------------------------------
bool operator < (const Rational & in1, const Rational &in2)
{
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  bool is_less = 0; //not less than
  
  if( (a*d) < (c*b))
    is_less = 1; //true
  
  return is_less;
}
//-----------------------------------------------------------
bool operator <= (const Rational & in1, const Rational &in2)
{
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  bool is_less_equal = 0; //not less than
  
  if( (a*d) < (c*b))
    is_less_equal = 1; //true
  else if((a*d) == (c*d))
    is_less_equal = 1; //true
  else;
  
  return is_less_equal;
}
//-----------------------------------------------------------
Rational operator - (const Rational & in1, const Rational &in2)
{
  Rational out;
  
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  out.num = (a*d)-(b*c);
  out.den = b*d;
  
  out.reduce();
  return out;
}
//-----------------------------------------------------------
bool operator > (const Rational & in1, const Rational &in2)
{
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  
  bool is_greater = 0; //not greater than
  
  if( (a*d) > (c*b))
    is_greater = 1; //true
  
  return is_greater;
}
//-----------------------------------------------------------
bool operator >= (const Rational & in1, const Rational &in2)
{
  int a = in1.num;
  int b = in1.den;
  int c = in2.num;
  int d = in2.den;
  bool is_greater_equal = 0; //not greater than
  
  if( (a*d) > (c*b))
    is_greater_equal = 1; //true
  else if((a*d) == (c*d))
    is_greater_equal = 1; //true
  else;
  
  return is_greater_equal;
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
  //make the number positive if both the num and den are negitive
  if((num < 0)&&(den<0))
    {
      num= -num;
      den= -den;
    }
  else if(den <0)
    {
      num = -num;
      den = -den;
    }
  else if(den == 0)
    {
      cout << "Warning denemator is equal to 0\n";
    }
  else;
}
