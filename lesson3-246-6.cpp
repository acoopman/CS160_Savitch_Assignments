// Section CSC160 - Computer Science I: C++

// File Name:lesson3-246-6 

// Student:Aidan Coopman

// Homework Number:lesson 3 #6

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------
//declare the function
//return value is interest due
float total_interest(double initial_balance, double monthly_rate, int months);

//----------------------------------------------------------------------------------
int main( )
{
  double initial_balance;
  double rate;
  double months;	
  double interest;
  char try_again = 'Y';
  
  while((try_again == 'Y')||(try_again == 'y'))
    {	
      
      cout << "Credit card interest\n";
      cout << "Enter doubles: initial balance, montly interest as a \n";
      cout << "decimal fraction, e.g. for 1.5x per month write 0.015 \n";
      cout << "and int months the bill has run.\n";
      cout << "I will give you the interest that has accumulated\n";
      
      cin >> initial_balance;
      cin >> rate;
      cin >> months;
      
      //call the function to get total interest
      interest = total_interest(initial_balance,rate,months);
      
      //output to the user the interest accumulated
      cout << "Interest accumulated = $" << interest << endl;
      // ask the user if he wants to try it again
      cout << "Would you like to try again? <Y for yes, N for no>\n";
      cin >> try_again;
    }
  return 0;
}

//----------------------------------------------------------------------------------
//define the function
float total_interest(double initial_balance, double monthly_rate, int months)
{
  double interest;
  double balance_due = initial_balance;
  double interest_due;
  
  //find the interest per month
  for(int i = 0; i < months; i++)
    {
      interest = balance_due*monthly_rate;
      balance_due += interest;
    }
  
  //intrest is being added to the initial so we have to subtract the initial balance
  interest_due = balance_due - initial_balance;
  return interest_due;
}
