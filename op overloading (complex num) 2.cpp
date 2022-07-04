//Add additional opeartora to class complex , 
//overload ++,+=,*= operators for complex class

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
		
		void operator ++()
		{
			m_real ++;
			m_img ++;
			cout<<"After ++ operation"<<endl;
			cout<<m_real<<" + "<<m_img<<"j\n\n";
		}
		
		void operator +=(int a)
		{
			m_real += a;
			m_img += a;
			cout<<"After += "<<a<<" operation"<<endl;
			cout<<m_real<<" + "<<m_img<<"j\n\n";
		}
		
		void operator *=(int a)
		{
			m_real *= a;
			m_img *= a;
			cout<<"After *= "<<a<<" operation"<<endl;
			cout<<m_real<<" + "<<m_img<<"j\n\n";
		}
		
		void display()
		{
			cout<<m_real<<" + "<<m_img<<"j"<<endl;
		}
};

int main()
{
	int img,real,num;
	
	Complex obj1;
	cout<<"enter real part and imaginary part  ";
	cin>>real>>img;
	obj1.input(real,img);
	cout<<"Complex num1  (old) ";
	obj1.display();
	
	++obj1;
	
	Complex obj2;
	cout<<"enter real part and imaginary part  ";
	cin>>real>>img;
	obj2.input(real,img);
	cout<<"Complex num2  (old) ";
	obj2.display();
	
	cout<<"enter the num to increment real and img part  ";
	cin>>num;
	obj2 += num;
	
	Complex obj3;
	cout<<"enter real part and imaginary part  ";
	cin>>real>>img;
	obj3.input(real,img);
	cout<<"Complex num3  (old) ";
	obj3.display();
	
	cout<<"enter the num to multiply real and img part  ";
	cin>>num;
	obj3 *= num;
	
	return 0;
}
