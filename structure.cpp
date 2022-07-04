#include<iostream>
using namespace std;

struct Student
{
		int roll;
		string name;
		
		void input()
		{
			cout<<"enter roll and name ";
			cin>>roll>>name;
		}
		void display()
		{
			cout<<"roll = "<<roll<<" name= "<<name<<endl;
		}
		
}a;
int main()
{
	//struct Student a;
	//a.input();
	a.roll=123123;
	a.name="asdasd";
	a.display();
	return 0;
}
