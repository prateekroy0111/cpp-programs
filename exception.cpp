#include <iostream>
using namespace std;
#define MAX 10

class Number
{
    int num1,num2;
    public:
        void num_input()
        {
            cout<<"Enter num1  ";
            cin>>num1;
            cout<<"Enter num2  ";
            cin>>num2;
        }
        void num_output()
        {
            try
            {
                int result;
                if (num2 == 0)
                {
                    throw 1;
                }
                result = num1/num2;
                cout<<"num1 = "<<num1<<" num2 = "<<num2<<endl;
                cout<<"num1 / num2 = "<<result<<endl;

            }
            catch(int e)
            {
                cout<<"EXCEPTION: Divide by Zero"<<endl;
            }
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }
        }
};

class Array1
{
    int num;
    int arr[MAX];
    public:
        void arr_input()
        {
            int i;
            cout<<"Enter size of array  ";
            cin>>num;
            for(i=0;i<num;i++)
            {
                cout<<"Enter num for index ["<<i<<"]  ";
                cin>>arr[i];
            }
            arr_output();
        }
        void arr_output()
        {
            int i;
            for(i=0;i<num;i++)
            {
                cout<<"arr ["<<i<<"]  = "<<arr[i]<<endl;
            }
        }
        void arr_edit()
        {
            int i,pos,val;
            try
            {
                cout<<"Enter the array index you want to change  ";
                cin>>pos;
                if(pos >= num)
                {
                    throw 1;
                }
                cout<<"Enter the new value  ";
                cin>>val;
                arr[pos]=val;

                cout<<"\nUPDATED ARRAY\n";
                arr_output();
            }
            catch(int e)
            {
                cout<<"EXCEPTION: Array Index Out of Bounds"<<endl;
            }
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }
        }
};

int main()
{
    int choice;
	do
	{
		cout<<"\n\n1. Divide Numbers \n2. Array Operations \n3. Exit \n\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				Number obj1;
                obj1.num_input();
                obj1.num_output();
			}
			break;
			
			case 2:
			{
				Array1 obj2;
                obj2.arr_input();
                obj2.arr_edit();
			}
			break;
			
			case 3:
			{
				exit(0);
			}
			break;		
			
			default:
				cout<<"enter correct option."<<endl;
		}
	}
	while(choice!=3);

    return 0;
}
