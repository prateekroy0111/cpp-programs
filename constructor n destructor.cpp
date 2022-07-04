#include<iostream>
using namespace std;

class number
{
	int num1;
	public:
		number()
		{
			cout<<"constructor"<<endl;
		}
		
		~number()
		{
			cout<<"destructor"<<endl;
		}
		
};
int main()
{
	number n1;
	number n2;
}
