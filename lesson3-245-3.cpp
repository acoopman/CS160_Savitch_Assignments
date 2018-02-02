// Section CSC160 - Computer Science I: C++

// File Name: lesson3-245-3

// Student: Aidan Coopman

// Homework Number: Lesson 3 #3

// Description:

// Last Changed:

 
#include <iostream>

using namespace std;

//------------------------------------------------------------------------
double stock_price(int dollars, int num, int den)
{
  double price;
  price = dollars + (num/static_cast<double>(den));
  
  return price;
}
//------------------------------------------------------------------------
int main( )
{
  int dollars;
  int num;
  int den;
  int shares;
  double total;
  double price;
  char try_again = 'Y';
  
  while((try_again == 'Y')||(try_again == 'y'))
    {
      // ask the user for the info
      cout << "Enter stock price and number of shares, please.\n";
      cout << "Enter price as integers: dollars, numerator, denominator.\n";
      cin >> dollars; cin >> num; cin >> den;
      cout << "Enter number of shares held.\n";
      cin >> shares;
      
      //lets figure out the stock price
      price = stock_price(dollars,num,den);
      
      //Figure out the total price of the stocks
      total = price*shares;
      
      //tell the user how much they have in the stock market
      cout << shares << " shares of stock with market price " << dollars
	   << " " << num << "/" << den << " has a value of $" << total << endl;

      // ask the user if he wants to try it again
      cout << "Would you like to try again? <Y for yes, N for no>\n";
      cin >> try_again;
    }
  return 0;
  
}
