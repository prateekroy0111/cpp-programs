#include<iostream>
using namespace std;

class number
{
	int num1,num2;
	public:
		number()
		{}
		number(int a,int b)
		{
			num1=a;
			num2=b;
		}
		void operator +(number n)
		{
			number temp;
			temp.num1=num1+n.num1;//10 (from n1) + 30 (from n2)
			temp.num2=num2+n.num2;//20 (from n1) + 40 (from n2)
			cout<<"sum of 1st part  "<<temp.num1<<endl;
			cout<<"sum of 2nd part  "<<temp.num2<<endl;
		}	
};

int main()
{
	number n1(10,20);
	number n2(30,40);
	n1+n2;
}
