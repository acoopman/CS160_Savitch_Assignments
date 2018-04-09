#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_LIST_SIZE = 50;

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
		double list[MAX_LIST_SIZE];
		int size;		
};
#endif


