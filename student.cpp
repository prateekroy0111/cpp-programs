#include<iostream>
using namespace std;

class details
{
	char name[10];
	int roll;
	public:
		void input(void);
		void display(void);
}s1,s2;

void details::input(void)
{
	cout<<"enter name  ";
	cin>>name;
	cout<<"enter roll  ";
	cin>>roll;
}

void details::display(void)
{
	cout<<name<<"\t"<<roll<<endl;
}

int main()
{
	cout<<"1st student"<<endl;
	s1.input();
	cout<<"2nd student"<<endl;
	s2.input();
	cout<<"1st student"<<endl;
	s1.display();
	cout<<"2nd student"<<endl;
	s2.display();
}
