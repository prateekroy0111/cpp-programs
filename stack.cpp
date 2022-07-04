#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

class Stack
{
	Node *top;
	int count = 0;
	
	public:
		Stack()
		{
			top = NULL;
		}
		
		int isEmpty()  
		{  
			return top == NULL;  
		}  

		void push(int data)
		{
			Node *temp = new Node();
			temp->data = data;
			temp->next = NULL;
			
			if(isEmpty())
				temp->next = NULL;
			else
				temp->next = top;
				
			top = temp;
			cout << data << " Pushed"<<endl;
		}
		
		void pop()
		{
			if(isEmpty())
				cout << "Stack is empty."<<endl;
			else
			{
				Node *temp = top;
				top = top->next;
				cout << temp->data << " Popped"<<endl;
				delete(temp);
			}
		}
		
		void peek()	//Display Top most Node data
		{
			if(isEmpty())
				cout << "Stack is empty."<<endl;
			else
			{
				Node *temp = top;
				cout <<"Topmost Node data = " << temp->data << endl; 
			}
		}
		
		void display()
		{
			cout << "---------Display all nodes--------"<<endl;
			Node *temp;  
		    if (isEmpty()) 
		    {  
		        cout << "Stack is empty."<<endl;
		    }  
		    else 
		    {  
		        temp = top;  
		        while (temp != NULL) 
		        {  
		            cout << temp->data << endl;  
		  			temp = temp->next;  
		        }  
		    }
		}
		
		void countNodeType()
		{
			int count_odd = 0, count_even = 0;
			Node *temp;  
		    if (isEmpty()) 
		    	cout << "Stack is empty."<<endl;  
		    else 
		    {  
		        temp = top;  
		        while (temp != NULL) 
		        {  
		            if(temp->data % 2 == 0)
						count_even++;
					else
						count_odd++;
		  			temp = temp->next;  
		        }  
		    }
		    cout << "No. of nodes with even data = "<<count_even<<endl;  
		    cout << "No. of nodes with odd data = "<<count_odd<<endl;  
		}		
		
		void countNodes()
		{
			Node *temp;  
		    if (isEmpty()) 
		    	cout << "Stack is empty."<<endl;   
		    else 
		    {  
		        temp = top;  
		        while (temp != NULL) 
		        {  
		            count++; 
		  			temp = temp->next;  
		        }  
		    }
		    cout << "Total no. of nodes = "<<count<<endl;  
		}
		
		void displayAlternate()
		{
			countNodes();
			
			cout << "---------Display alternate nodes--------"<<endl;
			Node *temp;  
		    if (isEmpty()) 
		    	cout << "Stack is empty."<<endl;  
		    else 
		    {  
		    	int i=1;
		        temp = top;  
		        while (i < count) 
		        {  
		        	if(temp->data % 2 == 0)
		            	cout << temp->data << endl; 
		  			temp = temp->next; 
					i++; 
		        }  
		    }
		}
		
		int search(int num)
		{
			Node *temp;  
		    if (isEmpty()) 
		    	cout << "Stack is empty."<<endl;   
		    else 
		    {  
		        temp = top;  
		        while (temp != NULL) 
		        {  
		            if(temp->data == num)
		            	return 1;
		  			temp = temp->next;  
		        }  
		    }
		    return 0;
		}			
};

int main()
{
	Stack obj;
	int ch;
	while(1)
	{
		cout<<"\nStack Data Structure (using Linked List)"<<endl;
		cout<<"1. PUSH (Insert the Element in Stack) "<<endl;
		cout<<"2. PUSH (Remove the top Element from Stack)"<<endl;
		cout<<"3. Peek (Display data of top most node)"<<endl;
		cout<<"4. Check if Stack is Empty"<<endl;
		cout<<"5. Count Total Nodes in the Stack"<<endl;
		cout<<"6. Count Nodes with Odd data and Even data"<<endl;
		cout<<"7. Display all nodes in the Stack"<<endl;
		cout<<"8. Display alternate nodes in the Stack"<<endl;
		cout<<"9. Search in Stack"<<endl;
		cout<<"10. Exit"<<endl;
		cout<<"Enter the Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int num;
					cout<<"Enter the Element"<<endl;
					cin>>num;
					obj.push(num);
					break;
				}
			case 2:
				{
					obj.pop();
					break;
				}
			case 3:
				{
					obj.peek();
					break;
				}
			case 4:
				{
					if(obj.isEmpty())
						cout<<"Stack is Empty"<<endl;
					else
						cout<<"Stack is not Empty"<<endl;
					break;
				}
			case 5:
				{
					obj.countNodes();
					break;
				}
			case 6:
				{
					obj.countNodeType();
					break;
				}
			case 7:
				{
					obj.display();
					break;
				}
			case 8:
				{
					obj.displayAlternate();
					break;
				}
			case 9:
				{
					int num;
					cout<<"Enter the data ";
					cin>>num;
					if(obj.search(num))
						cout<<"Element Exists"<<endl;
					else
						cout<<"Element doesn't Exist"<<endl;
					break;
				}
			case 10:
				{
					exit(0);
				}
			default:
				{
					cout<<"Invalid Choice. Try Again."<<endl;
				}
		}
	}
}
