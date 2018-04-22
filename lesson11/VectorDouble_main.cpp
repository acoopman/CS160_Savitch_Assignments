// Section CSC160 - Computer Science I: C++

// File Name: VectorDouble

// Student:Aidan Coopman

// Homework Number:lesson11 #1

// Description:

// Last Changed:

 
#include <iostream>
#include "VectorDouble.h"


using namespace std;

int main( )
{
  
  const int test_size = 51; //one more size so the push_back has to reallaocate
  cout << "Testing constructors-------------------------------------------------\n";
  //defualt constructor
  VectorDouble vec;
  //copy constructors
  VectorDouble vec2(vec);
  //last constructor
  VectorDouble vec4(300);
  cout << "The capacity of vec is "  << vec.capacity() << endl;
  cout << "The capacity of vec2 is " << vec2.capacity() << endl;
  cout << "The capacity of vec4 is " << vec4.capacity() << endl;
  
  cout << "Test the push_back(), vec.size() and << operator ----------------------\n"; 	
  for(int i=0;i<test_size;i++)
    {
      vec.push_back(i);
    }
    //do the opperator which calls the copy constructor
      VectorDouble vec3 = vec;
      cout << "The capacity of vec3 is " << vec3.capacity() << endl;

  //test the push back vec size and value at functions
  for(int i=0;i<vec.size();i++)
    {
      cout << "position is " << i << " " << vec.valueAt(i) << endl;
    }
  
  cout << "Array is \n" << vec << endl;
  
  cout << "Testing the == operator----------------------------------------------\n";
  if(vec3==vec)
    cout << "Vec3 and vec are equal\n";
 cout << "Lets change a value so they are not equal\n";
  vec.changeValueAt(4,0);
  if(vec3==vec)
    cout << "Vec3 and vec are equal\n";
  else
    cout << "Vectors are not equal\n";
  
  //testing reserve and resise:
  cout << "Testing capacity function -------------------------------------------\n";
  cout << "capacity of vec is " << vec.capacity() << endl;
  vec.reserve(30);
  cout << "capacity of vec after vec.reserve(30) " << vec.capacity() << endl;
  vec.reserve(150);
  cout << "capacity of vec after vec.reserve(150) " << vec.capacity() << endl;
  
  cout << "Testing resise function -------------------------------------------\n";
  cout << "capacity of vec is " << vec.capacity() << endl;
  vec.resize(30);
  cout << "capacity of vec after vec.resize(30) " << vec.capacity() << endl;
  vec.resize(150);
  cout << "capacity of vec after vec.resize(150) " << vec.capacity() << endl;
  cout << "-------------------------------------------------------\n";
  
  cout << "Testing exceptions\n";
  try
    {
      vec.valueAt(-1);
    }
  catch(int e)
    {
      if(e == 1)
	cout << "Bad index in valueAt()\n";
      if(e == 2)
	cout << "Bad index in changeValueAt()\n";
    }
  
  try
    {
      vec.changeValueAt(2,-1);
    }
  catch(int e)
    {
      if(e == 1)
	cout << "Bad index in valueAt()\n";
      if(e == 2)
	cout << "Bad index in changeValueAt()\n";
    }
  
  
  return 0;
}
