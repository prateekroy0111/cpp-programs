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
            try
            {
                if(empty())
                    throw 'a';
                else if(pos<1)
                    throw 1;
                else if(pos>count)
                    throw 1.0f;	
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
            catch(char c)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            }
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Enter Position greater than 0"<<endl;    //first index already full
            } 
            catch(float f)
            {
                cout<<"EXCEPTION CAUGHT : Index out of Range"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }
		}
		
		void addatend(int x)
		{
			try
            {
                if(empty())
                    throw 1;

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
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }	
		}
		
		void deletefrombeg()
		{
			try
            {
                if(empty())
                    throw 1;
                else
                {
                    Node *nextptr;
                    nextptr=head;
                    head=head->next;
                    nextptr->next=NULL;
                    cout<<"deleted element = "<<nextptr->data<<endl;
                    free(nextptr);
                    count--;
                }
            } 
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }	
		}
		
		void deletefrommid(int pos)
		{
			try
            {
                if(empty())
                    throw 1;
                else if (pos>count)
                    throw 1.1;
                else
                {
                    int i;
                    Node *nextptr,*prevptr;
                    for(prevptr=head,i=1;i<pos-1;prevptr=prevptr->next,i++);
                    nextptr=prevptr->next;
                    prevptr->next=nextptr->next;
                    cout<<"deleted element = "<<nextptr->data<<endl;
                    free(nextptr);
                    count--;
                }
            }
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            } 
            catch(float i)
            {
                cout<<"EXCEPTION CAUGHT : Index out of Range"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }	
		}
		
		void deletefromend()
		{
			try
            {
                if(empty())
                    throw 1;
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
                    cout<<"deleted element = "<<nextptr->data<<endl;
                    free(nextptr);
                    count--;
                }
            }
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
            }
		}

		void display()
		{
			try
            {
                if(empty())
                    throw 1;
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
            catch(int i)
            {
                cout<<"EXCEPTION CAUGHT : Linked List Empty!!!"<<endl;
            } 
            catch(...)
            {
                cout<<"EXCEPTION CAUGHT"<<endl;
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
				int pos;
                cout<<"enter number to insert  ";
                cin>>num;
                cout<<"enter the position to insert  ";
                cin>>pos;
                obj.addatmid(pos,num);
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
				obj.deletefrombeg();
			}
			break;
			
			case 5:
			{
				cout<<"enter node position to delete  ";
				cin>>num;
				obj.deletefrommid(num);
			}
			break;
			
			case 6:
			{
				obj.deletefromend();
			}
			break;
			
			case 7:
			{
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
