#include<iostream>
using namespace std;

class Student{
		int roll;
		string name;
	public:
		Student()
		{
			cout<<"default cons"<<endl;
		}
		
		Student(Student &o)//copy constructor
		{
			roll=o.roll;
			name=o.name;
		}
		void input(int r,string n)
		{
			roll=r;
			name=n;
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
	s.input(111,"abc");
	s.show_data();
	cout<<"\n\n\n";
	
	Student s2(s);
	s2.show_data();
	return 0;
}
