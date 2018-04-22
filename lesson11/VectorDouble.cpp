#include <iostream>
#include "VectorDouble.h"

using namespace std;

VectorDouble::VectorDouble()
{
  const int ARRAY_STARTING_SIZE = 50;
  maxCount = ARRAY_STARTING_SIZE;
  array = new double[maxCount]; 
  count = 0;
}
//-----------------------------------------------------------
VectorDouble::VectorDouble(int size)
{
  maxCount = size;
  array = new double[maxCount];
  count = 0;
}
//-----------------------------------------------------------
VectorDouble::VectorDouble(const VectorDouble & in)
{
  maxCount = in.maxCount;
  count = in.count;
  array = new double[maxCount];
  
  //copy the vector 
  for(int i =0; i < count; i++)
    {
      array[i] = in.array[i];
    }
 }
//-----------------------------------------------------------
VectorDouble::~VectorDouble()
{
  delete [] array;
}
//-----------------------------------------------------------
void VectorDouble::push_back(double in)
{
  double *new_vector = new double[2*maxCount];
  //check if we have enough space... if not reallocate memory
  if(count == maxCount)
    {
      //allocate a new vector that is twice the size
      double *new_vector = new double[2*maxCount];
      
      //set this new vector equal to the previous array
      for(int i=0;i<maxCount;i++)
	    new_vector[i] = array[i];	
      
      //get rid of the old memory
      delete[] array;
      //set the array pointer to the new memory 
      array = new_vector;
      // max count has doubled
      maxCount *= 2;
    }
  
  //we have enought space
  array[count] = in;
  count++;
}
//-----------------------------------------------------------
double VectorDouble::valueAt(int idx)
{
  if((idx >= 0)&&(idx < maxCount))
    return array[idx];
  else
    {
      throw 1;
    }
}
//-----------------------------------------------------------
//Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
int VectorDouble::capacity()
{
  return maxCount;
}
//---------------------------------------------------------
int VectorDouble::size()
{
  return count;
}
//-----------------------------------------------------------
ostream& operator <<(ostream& out, const VectorDouble& theObject)
{
  for(int i=0; i< theObject.count; i++)
    cout << theObject.array[i] << endl;
    
  return out;
}
//-----------------------------------------------------------
bool operator == (const VectorDouble &in1, const VectorDouble & in2)
{
  
  if(in1.count != in2.count)
    return 0;
  
  for( int i=0; i < in1.count; i++)
    {
      if( in1.array[i] != in2.array[i])
	return 0;
    }
  
  return 1;
}
//-----------------------------------------------------------

void VectorDouble::changeValueAt(double in, int idx)
{
  if((idx >= 0)&&(idx < maxCount))
    {
      array[idx] = in;
    }
  else
    {
      throw 2;
    }
}
//-----------------------------------------------------------
//Requests that the vector capacity be at least enough to contain n elements.
//If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater).
//In all other cases, the function call does not cause a reallocation and the vector capacity is not affected.
//This function has no effect on the vector size and cannot alter its elements.
void VectorDouble::reserve(int size)
{
  if(size > maxCount)
    {
      double *new_vector = new double[size];
      //cout << "Not enough memory, allocating memory in reserve function\n";
      
      //set this new vector equal to the previous array
      for(int i=0;i<count;i++)
	new_vector[i] = array[i];	
      
      //get rid of the old memory
      delete[] array;
      //set the array pointer to the new memory 
      array = new_vector;
      // max count has doubled
      maxCount = size;
    }
}
//-----------------------------------------------------------
//Resizes the container so that it contains n elements.
//If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
//If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, 
//the new elements are initialized as copies of val, otherwise, they are value-initialized.\
//If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
//Notice that this function changes the actual content of the container by inserting or erasing elements from it.
void VectorDouble::resize (int size)
{
  if(size < maxCount)
    {
      double *new_vector = new double[size];
      // cout << "too memory, deallocating memory in resize function\n";
      
      //set this new vector equal to the previous array
      for(int i=0;i<size;i++)
	new_vector[i] = array[i];	
      
      //get rid of the old memory
      delete[] array;
      //set the array pointer to the new memory 
      array = new_vector;
      // max count has doubled
      maxCount = size;	
    }
  
  else if(size > maxCount)
    {
      double *new_vector = new double[size];
      //cout << "Not enough memory, allocating memory in reserve function\n";
      
      //set this new vector equal to the previous array
      for(int i=0;i<count;i++)
	new_vector[i] = array[i];	
      
      //get rid of the old memory
      delete[] array;
      //set the array pointer to the new memory 
      array = new_vector;
      // max count has doubled
      maxCount = size;
    }
  else;
  
}

