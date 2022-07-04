#include<iostream>
using namespace std;

class number1
{
	int num1;
	public:
		void input_a()
		{
		 	cout<<"enter no. ";
		 	cin>>num1;
		}
		void output_a()
		{
		 	cout<<"number is "<<num1<<endl;
		}
		int get_a()
		{
			return num1;
		}		
};
class number2 : public number1
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
		void sum()	
		{
			cout<<"sum of the two is  "<<get_a()+num2;
		}	
};
int main()
{
	number2 n;
	n.input_a();
	n.output_a();
	n.input_b();
	n.output_b();
	n.sum();
}
