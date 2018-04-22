#ifndef VECTOR_DOUBLE_H
#define VECTOR_DOUBLE_H

using namespace std;

class VectorDouble
{
public:
  VectorDouble();
  VectorDouble(int size);
  VectorDouble(const VectorDouble & in); 
  ~VectorDouble();
  void   push_back(double in);
  double valueAt(int idx);
  void   changeValueAt(double in, int idx);
  
  //Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
  int capacity();
  
  //This is the number of actual objects held in the vector, which is not necessarily equal to its storage capacity.
  int size();//return count
  
  //Requests that the vector capacity be at least enough to contain n elements.
  //If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater).
  //In all other cases, the function call does not cause a reallocation and the vector capacity is not affected.
  //This function has no effect on the vector size and cannot alter its elements.
  void reserve(int size);
  
  //Resizes the container so that it contains n elements.
  //If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
  //If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, 
  //the new elements are initialized as copies of val, otherwise, they are value-initialized. \
  //If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
  //Notice that this function changes the actual content of the container by inserting or erasing elements from it.
  void resize (int size);
  
  friend ostream& operator <<(ostream& out, const VectorDouble& theObject);
  
  //to be equal, the values of count and the array elements must match
  friend bool operator == (const VectorDouble &in1, const VectorDouble & in2);
  
  
 private:
  
  double *array;
  int maxCount;//size of the dynamic array
  int count;//current array position
  
  
};

#endif
