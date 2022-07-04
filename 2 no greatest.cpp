#include<iostream>
using namespace std;

class number
{
	public:
		int n1,n2;
		void get_input();
		int calculate();
		void get_output();	
};

void number::get_input()
{
	cout<<"enter 2 nos.";
	cin>>n1>>n2;
}

int number::calculate()
{
	if(n1>n2)
		return n1;
	else
		return n2;
}

void number::get_output()
{
	cout<<"greatest no. is   "<<calculate();
}
	
int main()
{
	number obj;
	obj.get_input();
	obj.calculate();
	obj.get_output();
}
