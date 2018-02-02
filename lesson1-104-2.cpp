// Section CSC160 - Computer Science I: C++

// File Name: Lesson 1

// Student: Aidan Coopman

// Homework Number: ch 2 # 2

// Description:

// Last Changed:

#include <iostream>

using namespace std;

int main( )
{
	double n;
	int iterations = 100;

	cout << " enter in a value for n\n";
	cin >> n;
	double guess = n/2;

	for (int i =0; i < iterations; i++)
	{
		double r = n/guess;
		guess = (guess+r)/2.0;
	}	
	
 	cout << " The answer for the sqrt of " << n << " = " << guess << endl;
    return 0;

}
