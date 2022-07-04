#include<iostream>
using namespace std;

class area
{
	int r;
	float area;
	public:
		void input()
		{
			cout<<"enter the radius of circle ";
			cin>>r;
		}
		void display()
		{
			area=3.14*r*r;
			cout<<"\narea of the circle is  "<<area;
		}
		
};

int main()
{
	area c;
	c.input();
	c.display();	
}
