#include<iostream>
using namespace std;

class number1
{
	int num1;
	public:
		void input_a()
		{
		 	cout<<"enter 1st no. ";
		 	cin>>num1;
		}
		void output_a()
		{
		 	cout<<"number 1st is "<<num1<<endl;
		}
		int get_a()
		{
			return num1;
		}		
};
class number2 
{
	int num2;
	public:
		void input_b()
		{
		 	cout<<"enter 2nd no.  ";
		 	cin>>num2;
		}
		void output_b()
		{
		 	cout<<"2nd number is "<<num2<<endl;
		}
		int get_b()
		{
			return num2;
		}
};
class number3 : public number1,public number2
{
	int num3;
	public:
		void input_c()
		{
		 	cout<<"enter 3rd no.  ";
		 	cin>>num3;
		}
		void output_c()
		{
		 	cout<<"3rd number is "<<num3<<endl;
		}
		int get_c()
		{
			return num3;
		}
		void sum()	
		{
			cout<<"sum of the three is  "<<get_a()+get_b()+num3;
		}	
};
int main()
{
	number3 n;
	n.input_a();
	n.output_a();
	n.input_b();
	n.output_b();
	n.input_c();
	n.output_c();
	n.sum();
}
