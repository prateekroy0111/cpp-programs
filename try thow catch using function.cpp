#include<iostream>
using namespace std;

void num(int a,int b)
{
	if(b!=0)
		cout<<"result a/b =  "<<(a/b);
	else
		throw 4;
}

int main()
{
	try
	{
		num(8,0);
	}
	catch(const char *s)
	{
		cout<<"string"<<"    "<<s;
	}
	catch(...)//ellipsis
	{
		cout<<"exception caught";
	}
	return 0;
}
