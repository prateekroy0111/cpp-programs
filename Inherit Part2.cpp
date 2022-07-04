#include<iostream>
#include "test1.cpp"
using namespace std;

class Number2 : public Number1
{
	int num2;
	public:
		void input_b()
		{
		 	cout<<"enter 2 no.  ";
		 	cin>>num2;
		}
		void output_b()
		{
		 	cout<<"2 number is "<<num2<<endl;
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
	Number2 n;
	n.input_a();
	n.output_a();
	n.input_b();
	n.output_b();
	n.sum();
}
