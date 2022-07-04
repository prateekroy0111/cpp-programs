#include<iostream>
using namespace std;

class Student{
	
		int roll;
		string name;
	public:	
		void insert(int roll, string name)
		{
			this->roll=roll;
			this->name=name;
		}
		
		void display();
		
};
void Student::display()
{
	cout<<"roll = "<<roll<<endl;
	cout<<"name = "<<name<<endl;
}
int main()
{
	Student s1;
	s1.insert(123,"xyz");
	s1.display();
	return 0;
}
