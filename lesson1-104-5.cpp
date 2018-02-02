// Section CSC160 - Computer Science I: C++

// File Name: Lesson 1

// Student: Aidan Coopman

// Homework Number: 5

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
{
	double radius, volume;

	//ask the user to enter the radius	
	cout << "Enter radius of a sphere." << endl;
	cin >> radius;
	
	//calculate the volume and tell the user the answer
    volume = (4.0/3.0)*3.1415*radius*radius;

	cout << "The volume is " << volume << endl;
    return 0;

}
