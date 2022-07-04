#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if(x==0) throw x;
		else if(x==1) throw 'a';
		else if(x==2) throw 1.0;
	}
	
	catch (int i)
	{
		cout<<"caught integer"<<endl;
	}
	catch (float i)
	{
		cout<<"caught float"<<endl;
	}
	catch (char i)
	{
		cout<<"caught char"<<endl;
	}
	catch (...)//ellipsis
	{
		cout<<"caught an exception"<<endl;
	}
}

int main()
{
	test(0);
	test(1);
	test(2);
	getch();
}
