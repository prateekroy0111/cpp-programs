#include<iostream>
using namespace std;

class StaticTest{
	
		static int count;
	public:
		StaticTest()
		{
			count++;
		}
		
		void display()
		{
			cout<<"count = "<<count<<endl;
		}
		
};

int StaticTest::count=0;

int main()
{
	StaticTest t1;
	t1.display();
	StaticTest t2;
	t2.display();
	StaticTest t3;
	t3.display();
	return 0;
}
