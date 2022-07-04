#include<iostream>
using namespace std;

class Complex
{
	int m_real,m_img;
	public:
		void input(int a,int b)
		{
			m_real=a;
			m_img=b;
		}
		
		Complex operator +(Complex n)
		{
			Complex temp;
			temp.m_real=m_real+n.m_real;//10 (from obj1) + 30 (from obj2)
			temp.m_img=m_img+n.m_img;//20 (from obj1) + 40 (from obj2)
			return temp;
		}
		
		void display()
		{
			cout<<m_real<<" + "<<m_img<<"j"<<endl;
		}
};

int main()
{
	Complex obj1;
	obj1.input(10,20);
	cout<<"Complex num1  ";
	obj1.display();
	
	Complex obj2;
	obj2.input(30,40);
	cout<<"Complex num2  ";
	obj2.display();
	
	Complex obj3;
	obj3 = obj1 + obj2;
	cout<<"Sum of Complex num1 and num2  ";
	obj3.display();
	
	return 0;
}
