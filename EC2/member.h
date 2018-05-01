#ifndef MEMBER_H
#define MEMBER_H

using namespace std;

class Member
{
public:
Member();
~Member();
Member(string name, int age_in, string sex_in);

void set_name(string name);
void set_age(int age_in);
void set_sex(string sex_in);
string get_name();
int get_age();
string get_sex();

friend ostream& operator <<(ostream& out, const Member& theObject);
friend void swap(Member & a, Member & b);
	
private:
string fullname;
int age;
string sex;
};
#endif
