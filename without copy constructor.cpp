#include<iostream>
#include<string.h>
using namespace std;

class Student{
	int roll;
	string name;
	public:
		void insert()
		{
			roll=10;
			name="abc";
		}
		void copy(Student obj)
		{
			roll=obj.roll;
			name=obj.name;
		}
		void show_data()
		{
			cout<<"Roll no:"<<roll<<endl;
			cout<<"Name :"<<name<<endl;
		}
};
int main()
{
	Student s;
	s.insert();
	s.show_data();
	Student s2;
	s2.show_data();
	s2.copy(s);
	s2.show_data();
	return 0;
}
