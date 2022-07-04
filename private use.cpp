#include<iostream>
using namespace std;

class number
{
	private:
		int x,y;
	public:
		number(int a,int b)
		{
			x=a;
			y=b;	
		}
		int get_x()
		{
			return x;	
		}
		int get_y()
		{
			return y;	
		}
		void display()
		{
			cout<<"x,y are : "<<x<<"\t"<<y<<endl;	
		}
};
int main()
{
	number num(12,15);
	cout<<"value of x "<<num.get_x()<<endl;
	cout<<"value of y "<<num.get_y()<<endl;
	num.display();
}
