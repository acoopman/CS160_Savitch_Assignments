#include "List.h"

//---------------------------------------------------------------------------
List::List()
{
  size = 0;
}
//---------------------------------------------------------------------------
List::~List()
{
  size = 0;
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
  if((idx >= 0) && (idx < MAX_LIST_SIZE))
    {
      value = list[idx];
    }
  else
    {
      cout << "invalid index\n";
      exit(1);
    }
  
  return value;	 
}
//---------------------------------------------------------------------------
double  List::getLast()
{
  
  //if size > 0
  if(size >0)
    {
      return list[size-1];	
    }
  
  else
    {
      cout << "the list is empty\n";
      exit(1);
    }
}
//---------------------------------------------------------------------------
void List::addValue(double temp)
{
  if(full())
    {
      cout << "Error: adding to a full list.\n";
      exit(1);	
    }	
  else
    {
      list[size++] = temp;
      //size = size + 1;
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
bool List::full()
{
  return (size == MAX_LIST_SIZE);
}
//---------------------------------------------------------------------------
ostream& operator <<(ostream& out, const List& theObject)
{
  for(int i=0; i<theObject.size; i++)
    out << theObject.list[i] << endl;
  return out;
}
//---------------------------------------------------------------------------
