//---------------------------------------------------------------------------
// CSC160 Homework 8 - StudentException.h
//
// This is the header file for the StudentException class
// This class has the following members:
//		- a one-argument constructor function that accepts a textual error message
//		- a private member variables to hold the error message
//		- a public accessor function named errorMessage to retrieve the stored message
// In this simple implementation all text strings are considered valid error messages
//---------------------------------------------------------------------------
#ifndef DIGITALTIMEEXCEPTION_H
#define DIGITALTIMEEXCEPTION_H
#include <string>

/* Please do the following.  First write a new class named DigitalTimeException that has these members:

  
Assume that any integer value and any text string will be valid.
Private member variables to store the error number and the error message.  
Store the error message as a string type variable (use the StudentException class from above as a guide 
if you need to).
Public member functions errorNumber and errorMessage that return the stored error number and error message, 
respectively.
*/

using namespace std;

class DigitalTimeException
{
public:
  //  A constructor that accepts two arguments: an integer error number and a textual error message.
  DigitalTimeException(int number, string message);
  //Public member functions errorNumber and errorMessage
    string errorMessage();
    int    errorNumber();
private:
    //    Private member variables to store the error number and the error message
    int    error_number;
    string error_message;
    
};
#endif

