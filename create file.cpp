#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream filestream("test.txt");
	if(filestream.is_open())
	{
		filestream<<"sadasdas sadasd asdas sadasdas sadasd asdas"<<endl;
		filestream<<"sadasdas sadasd asdas"<<endl;
		filestream<<"sadasdas sadasd asdas"<<endl;
		filestream<<"sadasdas sadasd asdas"<<endl;
		filestream.close();
		cout<<"file created";
	}
	else
	{
		cout<<"cant open the file";
	}
	return 0;
}
