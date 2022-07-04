#include<conio.h>
#include<iostream>
using namespace std;

#define PI 3.14

class Area
{
	public:
		void calculate_area(int s)
		{
			cout<<"Area of square = "<<s*s<<endl;
		}
		void calculate_area(float r)
		{
			cout<<"Area of circle = "<<PI*r*r<<endl;
		}
};

int main()
{
	int choice;
	char c;
	do
	{
		cout<<"\n\nCalculate Area:\n1. Square\n2. Circle\n3. Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int len;
				cout<<"enter length of side ";
				cin>>len;
				Area obj1;
				obj1.calculate_area(len);
				break;
			
			case 2:
				float rr;
				cout<<"enter radius of circle ";
				cin>>rr;
				Area obj2;
				obj2.calculate_area(rr);
				break;
				
			case 3:	
				exit(0);
				break;
				
			default:
				cout<<"Wrong Input";	
		}
		
		printf("\n\nenter Y or y to run again   ");
		scanf(" %c",&c);
		
	}while(c=='y'||c=='Y');
	
	return 0;
}
