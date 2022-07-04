#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

template<class t,class t2>
class number
{
	t num1;
	t2 num2;
	public:
		number(t n1,t2 n2)
		{
			num1=n1;
			num2=n2;
		}
		void display()
		{
			cout<<num1<<"\t"<<num2<<endl;
		}
};

int main()
{
	number <int,float> nn(2,45.67);
	nn.display();
	number <int,char> nn2(2,'e');
	nn2.display();
	getch();
}
