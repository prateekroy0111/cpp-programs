//Write a class cString and overload +,<,>,== operator 
//for various string operations.

#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class cString
{
	char str[10];
	public:
		void input(char* obj_str)
		{
			strcpy(str,obj_str);
		}
		void operator +(cString& ob1);
		void operator <(cString& ob2);
		void operator >(cString& ob3);
		void operator ==(cString& ob4);
		void operator =(char* text);
		void display()
		{
			cout<<"Display ";
			puts(str);
			cout<<"\n";
		}
};

void cString::operator +(cString& ob1)
{
	cString temp;
	strcpy(temp.str,str);
	strcat(temp.str,ob1.str);
	cout<<"New String = "<<temp.str<<endl;
}

void cString::operator <(cString& ob2)
{
	if (strlen(this->str) > strlen(ob2.str))
		cout<<ob2.str<<" < "<<this->str<<endl;
	else
		cout<<this->str<<" < "<<ob2.str<<endl;
}

void cString::operator >(cString& ob3)
{
	if (strlen(this->str) > strlen(ob3.str))
		cout<<this->str<<" > "<<ob3.str<<endl;
	else
		cout<<ob3.str<<" > "<<this->str<<endl;
}

void cString::operator ==(cString& ob4)
{
	if (strcmp(this->str,ob4.str) == 0)
		cout<<this->str<<" equals "<<ob4.str<<endl;
	else
		cout<<ob4.str<<" not equals "<<this->str<<endl;
}

void cString::operator =(char* text)
{
	strcpy(str,text);
	cout<<"String assignment = "<<str<<endl;
}

int main()
{
	cString obj1,obj2;
	char str1[10],str2[10];
	
	cout<<"Enter first string ";
	gets(str1);
	obj1.input(str1);
	obj1.display();
	
	cout<<"Enter second string ";
	gets(str2);
	obj2.input(str2);
	obj2.display();
	
	obj1 + obj2;
	
	obj1 < obj2;
	
	obj1 > obj2;
	
	obj1 == obj2;
	
	obj1 = "ABCD";
	
	return 0;
}


