#include<iostream>
using namespace std;

#define MAX 5

template <class stk>
struct node 
{
	stk data;
	struct node * next;
};

template<class stk>
class stack
{
	node<stk> *next_ptr;
	int top;
	public:
		stack()
		{
			cout<<"\nInitialization";
			top=-1;
			next_ptr=NULL;
		}
		
		void push()
		{
			if(top==MAX)
			{
				cout<<"\n---:Stack is Full:---\n";
			}
			else if(top==-1)
			{
				node<stk> * n=new node<stk>;
				cout<<"\n\nEnter data  ";
				cin>>n->data;
				cout<<n->data<<"  Pushed";
				next_ptr=n;
				next_ptr->next=NULL;
				top++;
			}
			else
			{
				node<stk> * n=new node<stk>;
				cout<<"\n\nEnter data  ";
				cin>>n->data;
				cout<<n->data<<"  Pushed";
				n->next=next_ptr;
				next_ptr=n;
				top++;
			}
		}
		
		void pop()
		{
			if(top==-1)
			{
				cout<<"\n-----Stack is Empty-----\n";
			}
			else
			{
				node<stk> * n=new node<stk>;
				cout<<"\n"<<next_ptr->data<<"  Poped";
				next_ptr=next_ptr->next;
				top--;
			}
		}
		
		void show()
		{
			node<stk> *temp;
			cout<<"\n\nStack Display \n";
			for(temp=next_ptr;temp!=NULL;temp=temp->next)
			{
				cout<<temp->data<<endl;
			}
		}
};

int main()
{
	cout<<"\n-------Integer Stack-------"<<endl;
	stack<int> s;
	s.push();
	s.push();
	s.push();
	s.push();
	
	cout<<"\n\n";
	s.pop();
	s.pop();
	
	s.show();
	
	
	
	cout<<"\n-------Character stack-------"<<endl;
	stack<char> c;
	c.push();
	c.push();
	c.push();
	c.push();
	
	cout<<"\n\n";
	c.pop();
	c.pop();
	
	c.show();
	
	return 0;
}
