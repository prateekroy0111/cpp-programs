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
		
		friend operator -(number &n);
		
		void display()
		{
			cout<<"1st no =  "<<num1<<endl<<"2nd no =  "<<num2<<endl;
		}	
};

operator -(number &n)
{
	n.num1=-n.num1;
	n.num2=-n.num2;
}
		
int main()
{
	number n1(-5,8);
	cout<<"before"<<endl;
	n1.display();
	-n1;
	cout<<"after"<<endl;
	n1.display();
}
