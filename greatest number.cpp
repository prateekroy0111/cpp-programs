//greatest of 5 nos.
#include<iostream>
using namespace std;

class number
{
	int num[5];
	public:		
		void input();
		int body();
		void print();
};
void number::input()
{
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter "<<i+1<<" no.  ";
		cin>>num[i];
	}
}
int number::body()
{
	int max,i;
	max=num[0];
	for(i=1;i<5;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	return max;
}
void number::print()
{
	cout<<"greatest of 5 nos. is   "<<body();
}

int main()
{
	number great;
	great.input();
	great.body();
	great.print();
	return 0;
}
