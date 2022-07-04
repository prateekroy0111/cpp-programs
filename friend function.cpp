#include<iostream>
using namespace std;

class Number{
	private:
		int n=1;
	protected:
		int n1=2;
	public:
		int n2=3;	
		friend void display();
		
};
void display()
{
	Number s1;//object of number class
	cout<<" value of n = "<<s1.n<<endl;
	cout<<" value of n1 = "<<s1.n1<<endl;
	cout<<" value of n2 = "<<s1.n2<<endl;
}
int main()
{
	display();
	return 0;
}
