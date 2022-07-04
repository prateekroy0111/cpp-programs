#include <iostream>  
using namespace std;  
class A  
{  
	public:  
		void display()  
		{  
			cout << "function is invoked"<<endl;  
		}  
};   
int main()  
{  
 A a[2];  
 a[0].display();
 a[1].display();
}  
