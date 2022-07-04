#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y,z;
		Number()
		{
			cout<<"default"<<endl;
		}
		Number(int a,int b)//2 int or int float or int 2
		{
			x=a;y=b;
		}
		Number(int a,int b,int c)//3 int or float int or float 2
		{
			x=a;y=b;z=c;
		}
};
int main()
{
	Number numm;
	
	Number num=Number(8,9);//Number num(8,9)
	cout<<"x,y are : "<<num.x<<"\t"<<num.y<<endl;
	
	Number num1(8,9,10);//Number num(8,9,10)
	cout<<"x,y,z are : "<<num1.x<<"\t"<<num1.y<<"\t"<<num1.z;
}
