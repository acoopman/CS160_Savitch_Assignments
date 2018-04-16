/* Section CSC 160 Comp Sci I : C++
** Name:
** Student ID:
** File name: Lesson10-504-10.cpp
** Last Updated :

** Array program that reads a file and counts the occurances of the numbers in the array and sorts them.

*/
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//I changed the int array to vector class
void check_input(ifstream& iPut);
void set_array(ifstream& iPut, vector<int> & in_vec);
void sort_array(vector<int> & test);  
void check_repeats(vector<int> & test);

void print_vector(vector<int> & in)
{
  
  cout << "Size of vector = " << in.size() << "\nVector is" <<endl;
  for(int i =0; i < in.size(); i++ )
    cout << in[i] << endl;    
}

int main()
{
  ifstream iPut;
  
  //replace the array with the vector class
  //int test[29];
  vector<int> test_vector;
  
  iPut.open("hw10input.txt");
  
  check_input(iPut);
  
  set_array(iPut, test_vector);
  
  check_repeats(test_vector);
  
  iPut.close();
  
  return 0;
}

void check_input(ifstream& iPut)
{
  if(iPut.fail())
    {
      cout << "Input file opening failed. \n";
      exit(1);
    }
}

void set_array(ifstream& iPut, vector<int> & in_vec)
{
  
  int in;  
  for (int i = 0; i < 29; i++)
    {
      iPut >> in;
      //just change this to push on the vector instead
      //      test[i] = in;      
      in_vec.push_back(in);
    }
   
  // Call to selecting sort to sort array before output.
  sort_array(in_vec);
}

void sort_array(vector<int> & test) // Decending selection sort borrowed from a java program from CSC 116
{
  int i, j, first, temp;
  for (i = 28; i > 0; i --)
    {
      first = 0;
      for (j =1; j <= i; j++)
        {
	  if (test[j] < test[first])
            first = j;
        }
      temp = test[first];
      test[first] = test[i];
      test[i] = temp;
    }
}

void check_repeats(vector<int> & test)
{
  
  for(int i = 0; i < 29; i++)
    {
      int count = 0;
      int flag = 1;
      for ( int j = 0; j < i; j++) // First pass through array
        {
	  if (test[i] == test[j])
            flag += 1;
        }
      if ( flag == 1 ) // Flag to do a second pass 
	{
	  for(int k = 0; k < 29; k++)
	    {
	      if (test[i] == test[k])
		count += 1;
	    }
	  
	  cout << test[i] << " " << count <<endl;
	}
    }
}



