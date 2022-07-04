#include<iostream>
#include<string.h>
using namespace std;

class reverse
{
	char s[20];
	int l=0;
	public:
		void input()
		{
			cout<<"enter string  ";
			cin>>s;
		}
		void calc()
		{
			int i;
			for(i=0;s[i]!='\0';i++)
			{
				l++;	
			}
			cout<<"string length = "<<l;
		}
		void display()
		{
			int temp,i;
			for(i=0;i<l;i++)
			{
				temp=s[i];
				s[i]=s[l];
				s[l]=temp;
				l--;	
			}
			cout<<"\nreverse of the string is  "<<s[i];
		}		
};

int main()
{
	reverse s;
	s.input();
	s.calc();
	s.display();
	
}
