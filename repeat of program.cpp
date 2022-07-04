#include <iostream>  
using namespace std;  
int main()  
{  
	int age;
	char a;
	abc:    
      cout<<"Enter your age:\n";    
      cin>>age;
	  cout<<"age is "<<age<<endl;  
	  cout<<"Enter y to run again else n\n";    
      cin>>a;
      if (a=='y'){    
              goto abc;    
      }    
      else{
      	return 0; 
	  }
	         
} 
