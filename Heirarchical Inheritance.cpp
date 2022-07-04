//Heirarchical inheritance : to get square and cube of a number. Derive class square and cube from number class.

#include<string.h>
#include<iostream>
using namespace std;

class Number
{
    protected:
        int num;

    public:
        void set_num(int n)
        {
            this->num = n;
        }

        int get_num()
        {
            return num;
        }
};

class Square : public Number
{
    public:
        int get_square()
        {
            return num*num;
        }
};

class Cube : public Number
{
    public:
        int get_cube()
        {
            return num*num*num;
        }
};

int main()
{
    int num,choice;

    

    while(choice != 3)
    {
    	cout<<"\n\nEnter 1. Square  2. Cube 3. Exit\n\n";
    	cin>>choice;
    	
    	switch(choice)
		{
	        case 1:
	        {
	            cout<<"Enter the Number ";
	            cin>>num;
	
	            Square obj1;
	            obj1.set_num(num);    
	            cout<<"Number = "<<obj1.get_num()<<"\nSquare of "<<obj1.get_num()<<" = "<<obj1.get_square()<<endl;
	        }
	        break;
	
	        case 2:
	        {
	            cout<<"Enter the Number ";
	            cin>>num;
	
	            Cube obj2;
	            obj2.set_num(num);    
	            cout<<"Number = "<<obj2.get_num()<<"\nCube of "<<obj2.get_num()<<" = "<<obj2.get_cube()<<endl;
	            
	        }   
	        break;
	
	        case 3:
	        {
	            exit(0);
	        }
		}  
    }

    return 0;
}
