#include<iostream>
using namespace std;
class Test
{
	int num;
	public:
		Test()
		{
			num=8;
		}
		void operator ++()
		{
			num=num+50;
		}
		void print()
		{
			cout<<"the number is: "<<num<<endl;
		}
};
int main()
{
	Test tt;
	tt.print();
	++tt;
	tt.print();
	return 0;
}
