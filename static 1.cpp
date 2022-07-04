#include<iostream>
using namespace std;

class Student{
	public:
		int roll;
		string name;
		static string school;
		
		Student()
		{
			cout<<"constructor called"<<endl;
		}
		
		void input(int roll,string name)
		{
			this->roll=roll;
			this->name=name;
		}
		void display()
		{
			cout<<"roll = "<<roll<<" name= "<<name<<" school= "<<school<<endl;
		}
		
};

string Student::school="XYZ";

int main()
{
	Student a,b;
	a.input(33,"abc");
	a.display();
	b.input(313,"qwe");
	b.display();
	return 0;
}
