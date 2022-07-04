#include<iostream>
using namespace std;

class number
{
	int num[5];
	public:
		void input(void);
		void min(void);
		void max(void);
};

void number::input(void)
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter no. ";
		cin>>num[i];
	}
}

void number::max(void)
{
	int i,max;
	max=num[0];
	for(i=1;i<5;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	cout<<"largest no.  "<<max<<endl;
}

void number::min(void)
{
	int i,min;
	min=num[0];
	for(i=1;i<5;i++)
	{
		if(num[i]<min)
		{
			min=num[i];
		}
	}
	cout<<"smallest no.  "<<min<<endl;
}

int main()
{
	number n;
	n.input();
	n.max();
	n.min();
}
