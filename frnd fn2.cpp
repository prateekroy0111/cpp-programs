#include<iostream>
using namespace std;

class number2;
class number1
{
	int num1;
	public:
		void get_num1(void)
		{
			cout<<"enter num1  ";
			cin>>num1;
		}
		friend int max(number1,number2);
};

class number2
{
	int num2;
	public:
		void get_num2(void)
		{
			cout<<"enter num2  ";
			cin>>num2;
		}
		friend int max(number1,number2);
};

int max(number1 n1,number2 n2)
{
	if(n1.num1>n2.num2)
	{
		return n1.num1;
	}
	else
	{
		return n2.num2;
	}
}

int main()
{
	number1 n1;
	number2 n2;
	n1.get_num1();
	n2.get_num2();
	
	int maxx= max(n1,n2);
	cout<<"maximum of 2 is  "<<maxx;
}
