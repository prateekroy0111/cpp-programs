#include <conio.h>
#include <iostream>
using namespace std;

class TestScores
{
	int *t_scores,total;
		
	public:
		TestScores()	//default constructor
		{
			cout<<"Enter total no of Test Scores  ";
			cin>>total;
		}
		
		TestScores(TestScores &obj)	//copy constructor
		{
			int i;
			total=obj.total;
			t_scores=new int[total];
			for(i=0;i<total;i++)
			{
				t_scores[i]=obj.t_scores[i];
			}
		}
		
		void input()
		{
			t_scores=new int[total];
			cout<<"Enter the "<<total<<" Test scores "<<endl;
			int i;
			for(i=0;i<total;i++)
				cin>>t_scores[i];
		}
		
		void display()
		{
			int i;
			cout<<"\nTest Scores are : "<<endl;
			for(i=0;i<total;i++)
			{
				cout<<t_scores[i]<<endl;
			}
		}
		
		void average()
		{
			float avg;
			int i,sum=0;
			for(i=0;i<total;i++)
			{
				sum += t_scores[i];
			}
			avg = sum/float(total);
			cout<<"\nTest Score Average = "<<avg<<endl;
		}
		
		void operator [](int index)
		{
			if(index>=total || index<0)
				cout<<"\nERROR: Index out of range."<<endl;
			else
			{
				cout<<"Enter new value for index "<<index<<endl;
				cin>>t_scores[index];
			}
		}
		
		TestScores operator = (TestScores &obb)
		{
			int i;
			total=obb.total;
			t_scores=new int[total];
			for(i=0;i<total;i++)
			{
				t_scores[i]=obb.t_scores[i];
			}
		}

};

int main()
{		
	TestScores obj1;
	cout<<"\n\n------1st object------"<<endl;
	obj1.input();
	obj1.display();
	obj1.average();
	
	cout<<"\n\n------2nd object------\nCopied values from Object 1"<<endl;
	TestScores obj2(obj1);
	obj2.display();
	obj2.average();
	
	int index;
	cout<<"\n\nEnter the array index to overload ";
	cin>>index;
	
	obj2[index];	//overload []
	
	cout<<"\n\n------2nd object Updated Values------"<<endl;
	obj2.display();
	obj2.average();
	
	cout<<"\n\n------Overloading = operator------"<<endl;
	obj1 = obj2;
	obj1.display();
	obj1.average();
	
	return 0;
}

