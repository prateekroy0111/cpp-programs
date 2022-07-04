#include<iostream>
using namespace std;

int main()
{
	int num[5],min,max,i;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter "<<i+1<<"no.  ";
		cin>>num[i];
	}
	
	min=num[0];
	for(i=1;i<5;i++)
	{
		if(min>num[i])
		{
			min=num[i];
		}
	}
	
	max=num[0];
	for(i=1;i<5;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
	}
	
	cout<<"greatest no  "<<max<<"  smallest no  "<<min;
}
