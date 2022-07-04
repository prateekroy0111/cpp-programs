#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int x,y;
	cout<<"enter x, y  ";
	cin>>x>>y;
	try
	{
		if(y!=0)
			cout<<"result (x/y) = "<<(x/y)<<endl;
		else
			throw 'a';
	}
	catch(char y)
	{
		cout<<"divide by zero exception"<<endl;
	}
	cout<<"program ends";
	return 0;
}
