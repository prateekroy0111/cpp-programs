#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

template <class t>
t max(t &a,t &b)
{
	return a>b?a:b;
}

int main()
{
	int i=5;
	int j=10;
	cout<<"max =  "<<max(i,j);
	getch();
}
