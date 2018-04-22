#include "ListDynamic.h"

//---------------------------------------------------------------------------
List::List()
{
  const int START_LIST_SIZE = 50;
  list = new double[START_LIST_SIZE];
  max_size = START_LIST_SIZE;
  size = 0;
}
//---------------------------------------------------------------------------
List::~List()
{
  delete [] list;
}
//---------------------------------------------------------------------------
int List::getSize()
{
  return size;	 	
}
//---------------------------------------------------------------------------
double List::getValue(int idx)
{
  double value;
  //need to get if idx is >= 0  and idx < MAX_LIST_SIZE
  if((idx >= 0) && (idx < max_size))
    {
      value = list[idx];
    }
  else
    {
      //cout << "invalid index\n";
      //exit(1);
      throw 2;
    }
  
  return value;	 
}
//---------------------------------------------------------------------------
double  List::getLast()
{
  if(size >0)
    {
      return list[size-1];	
    }
  else
    {
      //cout << "the list is empty\n";
      //exit(1);
      throw 1;
    }
}
//---------------------------------------------------------------------------
void List::addValue(double temp)
{
   if(size >= max_size)
    {
      double *new_vector = new double[2*max_size];
      
      //set this new vector equal to the previous array
      for(int i=0;i<max_size;i++)
    	new_vector[i] = list[i];	
      
      //get rid of the old memory
      delete[] list;
      //set the array pointer to the new memory 
      list = new_vector;
      // max count has doubled
      max_size *=2;
    }	
  else
    {
      list[size++] = temp;
    }
}
//---------------------------------------------------------------------------
void List::deleteLast()
{
  if(size >0)
    {
      list[size-1]=0;
      size--;
    }
}
//---------------------------------------------------------------------------
ostream& operator <<(ostream& out, const List& theObject)
{
  for(int i=0; i<theObject.size; i++)
    out << theObject.list[i] << endl;
  return out;
}
//---------------------------------------------------------------------------
