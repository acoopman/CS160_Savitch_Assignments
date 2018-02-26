// Section CSC160 - Computer Science I: C++

// File Name: lesson5-611-1

// Student:Aidan Coopman

// Homework Number:lesson 5 #1

// Description:

// Last Changed:

 

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//----------------------------------------------------------------------
//--------------------------------------------------------------------

//declare the class
class CDAccount
{
  
public:
  //a default constructor that initializes the private member variables
  CDAccount();
  
  //a constructor that accepts three initial values for the private member variables
  CDAccount(double balance_in, double interest_in, int term_in );
  
  //destructor
  ~CDAccount();
  
  //member functions to return the current value of each of the private member variables
  double get_interest_rate();
  double get_initial_balance();
  double get_term();
  //a member function that calculates and returns the account balance at maturity based on the values in the three member variables.
  double get_mature_balance(); 
  //a member function that accepts an argument of type istream and reads the three member values from the open input stream
  void   inputAccountValues(istream & in);
  //a member function that accepts an argument of type ostream and writes a nicely formatted summary of the account values to that open output stream
  void output_values(ostream & out);

  
private:		
  //private member variables to hold the three values of a CD account
  double intial_balance;	
  double interestRate;
  int    term;
  
};

//------------------------------------------------------------------------

int main( )
{
  CDAccount accountOne(100,10,6);	
  CDAccount accountTwo;
  
  //print the info for the first account 
  accountOne.output_values(cout);

  //let the user put in values for the second account
  cout << "\n\nPlease eneter values for Initial balnce, Interest Rate and Term:\n";
  accountTwo.inputAccountValues(cin);
  accountTwo.output_values(cout);
  
  return 0;
  
}


//define the functions of the class
//--------------------------------------------------------------------
//constructor
CDAccount::CDAccount()
{
  interestRate    = 10;
  intial_balance  = 100;
  term            = 6;
}

CDAccount::CDAccount(double balance_in, double interest_in, int term_in )
{
  interestRate    = interest_in;
  intial_balance  = balance_in;
  term            = term_in;
}
//---------------------------------------------------------------------
//destructor
CDAccount::~CDAccount()
{
  
}
//---------------------------------------------------------------------
double CDAccount::get_interest_rate()
{
  return interestRate;
}
//---------------------------------------------------------------------
double CDAccount::get_initial_balance()
{
  return intial_balance;
}
//---------------------------------------------------------------------
double CDAccount::get_term()
{
  return term;
}
//---------------------------------------------------------------------
double CDAccount::get_mature_balance()
{
  double rateFraction = interestRate / 100.0;
  double interest = intial_balance * rateFraction * (term / 12.0);
  double mature_balance = intial_balance + interest; 

  return mature_balance;
}
//----------------------------------------------------------------------
void CDAccount::inputAccountValues(istream & in)
{
  cin >> intial_balance;
  cin >> interestRate;
  cin >> term;
}
//----------------------------------------------------------------------
void CDAccount::output_values(ostream & out)
{
  out << "CD Account interest rate: "          << get_interest_rate() << endl; 
  out << "CD Account initial balance: "        << get_initial_balance() << endl; 
  out << "CD Account balance at maturity is: " << get_mature_balance() << endl;                
  out << "CD Account term is: "                << get_term() << endl; 
  out << "When your CD matures in "            << get_term() << endl;
  out << "it will have a balance of "          << get_mature_balance() << endl;
}
