#include <iostream>
#include <string.h>
#include "member.h"

Member::Member()
{
	fullname="";
	age=0;
	sex="";
}
Member::~Member()
{
	
}
Member::Member(string name, int age_in, string sex_in)
{
fullname = name;
age = age_in;
sex = sex_in;
}
//---------------------------------------------------------------------------
ostream& operator <<(ostream& out, const Member& theObject)
{
    out << theObject.fullname << " " << theObject.age << " " << theObject.sex;
  return out;
}

string Member::get_name()
{
	return fullname;
}
int Member::get_age()
{
	return age;
}
string Member::get_sex()
{
	return sex;
}

void Member::set_name(string name)
{
	fullname = name;
}
void Member::set_age(int age_in)
{
	age = age_in;
}
void Member::set_sex(string sex_in)
{
	sex = sex_in;
}

void swap(Member & a, Member & b)
{
  string temp_fullname;
  int temp_age;
  string temp_sex;

  temp_fullname = a.fullname;
  temp_age = a.age;
  temp_sex = a.sex;

  a.fullname = b.fullname;
  a.age = b.age;
  a.sex = b.sex;

  b.fullname = temp_fullname;
  b.age = temp_age;
  b.sex = temp_sex;
}




