#include<iostream>
using namespace std;

class Number
{
	int num1;
	public:
		Number()
		{
			cout<<"constructor"<<endl;
			num1=1;
		}
		void input()
		{
		 	cout<<"enter no. ";
		 	cin>>num1;
		}
		void output()
		{
		 	cout<<"number is "<<num1<<endl;
		}
		~Number()
		{
			cout<<"destructor"<<endl;
		}
		
};
int main()
{
	Number n1,n2;
	n1.input();
	n1.output();
	n2.output();
}
