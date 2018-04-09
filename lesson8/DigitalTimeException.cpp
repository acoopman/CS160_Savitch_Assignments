//---------------------------------------------------------------------------
// CSC160 Homework 8 - Digitaltimeexception.cpp
//
// This is the implementation file for the Digitaltimeexception class
//---------------------------------------------------------------------------
#include <string>
#include "Digitaltimeexception.h"
using namespace std;

//  A constructor that accepts two arguments:
//  an integer error number and a textual error message.
DigitalTimeException::DigitalTimeException(int number, string message)
{
  //Public member functions errorNumber and errorMessage
  error_number = number;
  error_message = message;
}
// Return the error message stored inside the object
string DigitalTimeException::errorMessage()
{
	return error_message;
}
int DigitalTimeException::errorNumber()
{
	return error_number;
}


