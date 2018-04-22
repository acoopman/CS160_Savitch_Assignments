#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

using namespace std;

class List
{
	public:
		List();
		~List();
		int    getSize();
		double getLast();
		void   deleteLast();
		double getValue(int idx);
		void   addValue(double temp);
		bool   full();
		friend ostream& operator << (ostream& out, const List& theObject);
		
	private:
		double *list;
		int     size;
		int     max_size;	
	
};
#endif


