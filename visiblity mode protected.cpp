#include<iostream>
using namespace std;
class A{
	private:
		int a1=10;
	protected:
		int a2=20;
	public:
		int a3=30;
		int get_a()
		{
			return a1;
		}
};
class B : protected A{
	private:
		int b1=11;
	protected:
		int b2=22;
	public:
		int b3=33;
		int get_b()
		{
			return b1;
		}
		void disp(){
			//cout<<"a1 = "<<a1<<endl;
			cout<<"a2 = "<<a2<<endl;
			cout<<"a3 = "<<a3<<endl;
			cout<<"get_a = "<<get_a()<<endl;
		}
	
};
int main()
{
	B obj;
	//cout<<"b1 = "<<obj.b1<<endl;
	//cout<<"b2 = "<<obj.b2<<endl;
	cout<<"b3 = "<<obj.b3<<endl;
	cout<<"get_b = "<<obj.get_b()<<endl;
	//cout<<"a1 = "<<obj.a1<<endl;
	//cout<<"a2 = "<<obj.a2<<endl;
	//cout<<"a3 = "<<obj.a3<<endl;
	//cout<<"get_a = "<<obj.get_a()<<endl;
	obj.disp();
}
