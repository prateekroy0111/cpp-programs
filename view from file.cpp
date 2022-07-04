#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string a;
	
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,a))
		{
			cout<<a<<endl;
		}
		filestream.close();
		cout<<"file ends";
	}
	else
	{
		cout<<"cant open the file";
	}
	return 0;
}
