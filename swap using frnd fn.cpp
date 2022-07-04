#include<iostream>
using namespace std;

class Number{
	private:
		int num1,num2;
	public:
		void input();
		friend void swap(Number &n);
		void display();
};

void Number::input()
{
	cout<<"Enter First Number ";
	cin>>num1;
	cout<<"Enter Second Number ";
	cin>>num2;
}

void swap(Number &n)
{
	n.num1 = n.num1 + n.num2;
	n.num2 = n.num1 - n.num2;
	n.num1 = n.num1 - n.num2;
}

void Number::display()
{
	cout<<"Num1 = "<<num1<<"  Num2 = "<<num2<<endl;
}

int main()
{
	Number obj;
	obj.input();
	cout<<"Before Swap"<<endl;
	obj.display();
	swap(obj);	//friend function
	cout<<"After Swap"<<endl;
	obj.display();
	
	return 0;
}
