#include<iostream>
using namespace std;
class Animal
{
	public:
		void eat()
		{
			cout<<"Animal Eating...";
		}
};
class Dog:public Animal
{
	public:
		void eat()
		{
			cout<<"Dog Eating.....";
		}
};
int main(){
	Dog d;
	d.eat();
	return 0;
}
