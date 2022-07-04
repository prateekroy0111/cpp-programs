#include<stdlib.h>
#include<iostream>
using namespace std;

class Node  
{  
	int data;  
    Node *next;
    Node *head;
    int count;
    
    public: 
		Node()
		{
			head=NULL;
			count = 0;	
		} 
		
		int empty()
		{
			if(head==NULL)
				return 1;
			else
				return 0;
		}
		
		void addatbeg(int x)
		{
			Node* np = new Node(); 
			np->data=x;
			np->next=NULL;
			
			if(empty())
				head=np;
			else
			{
				np->next=head;
				head=np;
			}
			
			cout<<"inserted successfully!!!"<<endl;
			count++;
		}
		
		void addatmid(int pos,int x)
		{
			int i;
			if(pos<1 || pos>count)
			{
				cout<<"Wrong Input!!!"<<endl;
			}	
			else
			{
				Node *temp;
				Node *np = new Node();
				np->data=x;
				np->next=NULL;
				
				for(temp=head,i=1;i<pos-1;temp=temp->next,i++);
				
				np->next=temp->next;
				temp->next=np;	
				cout<<"inserted successfully!!!"<<endl;
				count++;
			}
		}
		
		void addatend(int x)
		{
			if(count==0)
				cout<<"Linked List Empty!!!"<<endl;
			else
			{
				Node *temp;
				Node *np = new Node();
				np->data=x;
				np->next=NULL;
				
				temp=head;
				while(temp->next!=NULL)
					temp=temp->next;
					
				temp->next=np;
				cout<<"inserted successfully!!!"<<endl;
				count++;
			}	
		}
		
		int deletefrombeg()
		{
			if(empty())
			{
				cout<<"empty"<<endl;
			}
			else
			{
				Node *nextptr;
				nextptr=head;
				head=head->next;
				nextptr->next=NULL;
				return nextptr->data;
				free(nextptr);
				count--;
			}
		}
		
		int deletefrommid(int pos)
		{
			if(empty())
			{
				cout<<"empty"<<endl;
			}
			else
			{
				if(count==0 || pos>count)
					cout<<"Error!!!"<<endl;
				else
				{
					int i;
					Node *nextptr,*prevptr;
					for(prevptr=head,i=1;i<pos-1;prevptr=prevptr->next,i++);
					nextptr=prevptr->next;
					prevptr->next=nextptr->next;
					return nextptr->data;
					free(nextptr);
					count--;
				}
			}
		}
		
		int deletefromend()
		{
			if(empty())
			{
				cout<<"empty"<<endl;
			}
			else
			{
				Node *nextptr,*prevptr;
				nextptr=head;
				while(nextptr->next!=NULL)
				{
					prevptr=nextptr;
					nextptr=nextptr->next;
				}
				prevptr->next=NULL;
				return nextptr->data;
				free(nextptr);
				count--;
			}
		}

		void display()
		{
			if(empty())
			{
				cout<<"empty"<<endl;
			}
			else
			{
				Node* nextptr = new Node(); 
				cout<<"Display all nodes"<<endl;
				for(nextptr=head;nextptr!=NULL;nextptr=nextptr->next)
				{
					cout<<nextptr->data<<"\t";
				}
			}	
		}
};

int main()
{
	int num,del,choice;
	
	Node obj;
	do
	{
		cout<<"\n\n1. insert at begining \n2. insert at middle \n3. insert at end \n";
		cout<<"4. delete from begining \n5. delete from middle \n6. delete from end \n";
		cout<<"7. display \n8. Exit\n\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				cout<<"enter number  ";
				cin>>num;
				obj.addatbeg(num);
			}
			break;
			
			case 2:
			{
				if(obj.empty())
				{
					cout<<"Linked List is empty\n"<<endl;
				}
				else
				{
					int pos;
					cout<<"enter number to insert  ";
					cin>>num;
					cout<<"enter the position to insert  ";
					cin>>pos;
					obj.addatmid(pos,num);
				}
			}
			break;
			
			case 3:
			{
				cout<<"enter number to insert  ";
				cin>>num;
				obj.addatend(num);
			}
			break;
			
			case 4:
			{
				del=obj.deletefrombeg();
				cout<<"deleted element = "<<del<<endl;
			}
			break;
			
			case 5:
			{
				cout<<"enter node position to delete  ";
				cin>>num;
				del=obj.deletefrommid(num);
				cout<<"deleted element = "<<del<<endl;
			}
			break;
			
			case 6:
			{
				del=obj.deletefromend();
				cout<<"deleted element = "<<del<<endl;
			}
			break;
			
			case 7:
			{
				if(obj.empty())
					cout<<"Linked List is empty"<<endl;
				else
					obj.display();
			}
			break;	
			
			case 8:
			{
				exit(0);
			}
			break;		
			
			default:
				cout<<"enter correct option."<<endl;
		}
	}
	while(choice!=8);
	return 0;
}
