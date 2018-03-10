//rational.h written by Aidan Coopman
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class Rational
{
  
public :
  
  //constructors and destructor
  Rational();
  //since the default is y=1, it cam take whole numbers
  Rational(int x, int y=1);
  ~Rational();
  
  
  //friend functions with overloaded operators
  friend Rational operator +  (const Rational & in1, const Rational &in2);
  friend ostream &operator << (ostream & out, const Rational & c);  
  friend istream &operator >> (istream & in,  Rational & x);  //modify x so cannot be const 
  friend Rational operator -  (const Rational & in1, const Rational &in2);
  friend Rational operator *  (const Rational & in1, const Rational &in2);
  friend Rational operator /  (const Rational & in1, const Rational &in2);
  
  //comparison operators
  friend bool operator == (const Rational & in1, const Rational &in2);
  friend bool operator <  (const Rational & in1, const Rational &in2);
  friend bool operator <= (const Rational & in1, const Rational &in2);
  friend bool operator >  (const Rational & in1, const Rational &in2);
  friend bool operator >= (const Rational & in1, const Rational &in2);
  
  //a member function to return the current numerator and denominator.
  int get_num();
  int get_den();
  
private :
  //a private member variables to hold the numerator and denominator values
  int num;
  int den;
  
  //this reduces the fraction and if negative, puts the numerator as the negative
  void reduce(); 
};
