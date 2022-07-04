#include<iostream>
using namespace std;

class Number{
	private:
		int n=1;
	protected:
		int n1=2;
	public:
		int n2=3;
		void display_n()
		{
			cout<<" value of n = "<<n<<endl;
		}
		void display_n1()
		{
			cout<<" value of n = "<<n1<<endl;
		}		
		
};
int main()
{
	Number s1;
	//cout<<" value of n = "<<s1.n<<endl; (this part will not execute)
	//cout<<" value of n1 = "<<s1.n1<<endl; (this part will not execute)
	cout<<" value of n2 = "<<s1.n2<<endl;
	s1.display_n();
	s1.display_n1();
	return 0;
}
