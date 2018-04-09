// Section CSC160 - Computer Science I: C++

// File Name: lesson9-441-4

// Student: Aidan Coopman

// Homework Number: lesson 9 #4

// Description:

// Last Changed:

 

#include <iostream>
#include <math.h> 

using namespace std;
double get_mean(double array[], int N);
double get_std(double array[], int N);

int main( )
{
  
  const int N = 10;
  double    numbers[N];
  int       count = 0;
  double    num;
  double    mean;
  double    std;
  
  char try_again = 'Y';
  while((try_again == 'Y')||(try_again == 'y'))
    {	
      cout << "Enter up to 10 values, separated by\n";
      cout << "white space, terminate input with a -1.\n";
      cout << "I will compute the average and standard deviation.\n";

      count = 0;
      
      do {
	cin >> num;	
	if(num != -1)
	  {
	    numbers[count] = num;
	    count++;
	  }
      }while ((num != -1)&&(count < N));
      
      mean = get_mean(numbers, count);
      cout << "The mean equals: " << mean << endl;
      
      std = get_std(numbers, count);
      cout << "The std equals: " << std << endl;
      
      //ask the user to try again
      cout << "Would you like to try again? <Y for yes, N for no>\n";
      cin >> try_again;
    }
  return 0;
  
}
//---------------------------------------------------------------------------
double get_mean(double array[], int N)
{
  double mean;
  double total=0;
  
  for(int i = 0; i < N; i++)
    {    
      total = total + array[i];
    }
  mean = total/(double)N;
  
  return mean;
}
//---------------------------------------------------------------------------
double get_std(double array[], int N)
{
  double std;
  double sum=0;
  double mean = get_mean(array, N);
  
  for (int i =0; i < N; i++)
    {
      sum = sum + ((array[i] - mean)*(array[i] - mean));
    }
  std = sqrt(sum/(double)N);
  
  return std;
}




