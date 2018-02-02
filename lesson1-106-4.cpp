// Section CSC160 - Computer Science I: C++

// File Name: Homework 1

// Student: Aidan Coopman

// Homework Number: 4

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
{
	float net;
	float rate;
	float months;
	float payment;
    char  user_in = 'Y';
    float monthly_payment;
    float principal;
    
    while(user_in == 'Y')
    {
	 //ask the user for input
	 cout<< "How much money do you need?\n";
	 cin >> net;

	 cout << "What is the interest rate?\n";
	 cin >> rate;
		
	 cout << "What is the loan period in months?\n";
	 cin >> months;

	  principal = net/(1-(rate*months/12.0));
      monthly_payment = principal/months;

      //tell the user the loan information 
      cout << "You will need a loan with a face value of $" << principal << endl;
      cout << "Your monthly payment will be $" << monthly_payment << endl << endl;

      //ask the user if they want to continue
     cout << "Would you like to calculate a new loan?" << endl;
     cout << "<Enter Y for yes or N for no.>" << endl;
     cin >> user_in;
	}

    return 0;
}
