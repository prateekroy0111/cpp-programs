#include<iostream>
using namespace std;

class Student{
	public:
		int roll;
		string name;
		
		void input(int r,string n)
		{
			roll=r;
			name=n;
		}
		/*void input()
		{
			cout<<"enter roll";
			cin>>roll;
			cout<<"enter name";
			cin>>name;
		}*/
		void display()
		{
			cout<<"roll = "<<roll<<" name= "<<name<<endl;
		}
};

int main()
{
	Student a;
	a.input(33,"asdas");
	//a.input();
	a.display();
	Student b;
	b.input(313,"a465sdas");
	//b.input();
	b.display();
	
	return 0;
}
