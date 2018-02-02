// Section CSC160 - Computer Science I: C++

// File Name: Lesson3-300-5

// Student:Aidan Coopman

// Homework Number:lesson 3 #5

// Description:

// Last Changed:

 
#include <iostream>
#include <math.h> 

using namespace std;

//--------------------------------------------------------------------------
double wind_chill(double t, double v);

//--------------------------------------------------------------------------
int main()
{
  double w;
  double t;
  double v;
  char try_again = 'Y';
  
  while((try_again == 'Y')||(try_again == 'y'))
    {	
      //ask user for temp
      cout << "Enter the Celcius temperature <<= 10 degrees>\n";
      cin >> t;
      
      // check if user put in an allowed value
      while(t > 10)
	{
	  cout << "NOT VALID TEMPERATURE\n";	
	  cout << "Enter the Celcius temperature <= 10 degrees\n";
	  cin >> t;
	}
      //ask user for wind speed
      cout << "Enter wind speed in meters/second:\n";
      cin >> v;
      
      //call the wind chill function
      w = wind_chill(t,v);
      
      //tell the user to wind chill factor
      cout << "Wind chill factor is " << w << endl;
      
      //ask the user to try again
      cout << "Would you like to try again? <Y for yes, N for no>\n";
      cin >> try_again;
    }
  return 0;
  
}
double wind_chill(double t, double v)
{
  double w;
  double v1 = pow(v,0.16);
  
  w = 13.12+(0.6215*t)-(11.37*v1)+(0.3965*t*(v1));
  
  return w;
}
//-----------------------------------------------------------------------------
