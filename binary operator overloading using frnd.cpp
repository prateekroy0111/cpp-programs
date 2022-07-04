#include<iostream>
using namespace std;

class number
{
	int num1,num2;
	public:
		number(){}
		number(int a,int b)
		{
			num1=a;
			num2=b;
		}
		friend number operator +(number n1,number n2);
		void display()
		{
			cout<<"1st no =  "<<num1<<endl<<"2nd no =  "<<num2<<endl;
		}
};

number operator +(number n1,number n2)
{
	number temp;
	temp.num1=n1.num1+n2.num1;
	temp.num2=n1.num2+n2.num2;
	//return temp;
	cout<<"sum of 1st part  "<<temp.num1<<endl;
	cout<<"sum of 2nd part  "<<temp.num2<<endl;
}
	
int main()
{
	number n1(10,30);
	number n2(20,50);
	n1+n2;
	/*number n3=n1+n2;
	n3.display();*/
}
