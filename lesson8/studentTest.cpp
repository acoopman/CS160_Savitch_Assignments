//StudentTest.cpp

#include <iostream>
#include "Student.h"
#include "StudentException.h"

using namespace std;

int main ()
{
	
	//write a simple test program called StudentTest that tests:
	//one-argument Student class constructor
	//The enroll member function
	

	//this case should trigger an exception since no student id was passed
  try
  {
	Student student1;
	student1.enroll("CSC-160-500");
  }
  catch(StudentException exception)
  {
    cout << exception.errorMessage() << endl;
  }
  
  //this should NOT trigger an exception because of the sneakynumber count
   try
  {
    Student testStudent1("S0000001");
    testStudent1.enroll("CSC-160-500");
  }
  catch(StudentException exception)
  {
    cout << exception.errorMessage() << endl;
  }
  
  //this is the one provided in the homework instructions
  try
  {
    Student testStudent1("S0000001"), testStudent2("S0000002"),testStudent3("S0000003");
    testStudent1.enroll("CSC-160-500");
    testStudent2.enroll("CSC-161-500");
    testStudent3.enroll("PHI-112-500");
  }
  catch(StudentException exception)
  {
    cout << exception.errorMessage() << endl;
  }
  
	return 0;
}    
