#include<iostream>
using namespace std;

class Number1
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
