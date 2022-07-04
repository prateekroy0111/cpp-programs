#include<iostream>
using namespace std;

void test(int x)
{
	try
	{
		if(x==0) throw x;
		else if(x==1) throw 'a';
		else if(x==2) throw 1.0f;
		else if(x==3) throw "exception";
	}
	
	catch (int i)
	{
		cout<<"caught an integer";
	}
	catch (char j)
	{
		cout<<"caught a char";
	}
	catch (float k)
	{
		cout<<"caught a floating point";
	}
	catch(const char *s)
	{
		cout<<s;
	}
}

int main()
{
	int a;
	cout<<"enter 0 or 1 or 2 or 3 ";
	cin>>a;
	test(a);
	return 0;
}
