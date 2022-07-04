#include<iostream>
using namespace std;

class number
{
	int num1,num2;
	public:
		number(int a,int b)
		{
			num1=a;
			num2=b;
		}
		void operator -()
		{
			num1=-num1;
			num2=-num2;
		}	
		void display()
		{
			cout<<"1st no =  "<<num1<<"\n"<<"2nd no =  "<<num2<<endl;
		}	
};

int main()
{
	number n1(-5,8);
	cout<<"before"<<endl;
	n1.display();
	-n1;
	cout<<"after"<<endl;
	n1.display();
}
