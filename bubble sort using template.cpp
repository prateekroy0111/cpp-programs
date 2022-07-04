#include <iostream> 
using namespace std;

#define MAX 50 
   
template <class T> 
void bubble_sort(T num[], int n) { 
	int i,j;
	T temp;
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	} 
} 
   
// Driver Code 
int main() { 

    int num[MAX],n,n2,i;
    char alpha[MAX];
    
    //int sorting
    cout<<"enter no of term ";
    cin>>n;
    cout<<"enter values "<<endl;
    for(i=0;i<n;i++)
    	cin>>num[i];
     
    bubble_sort<int>(num,n); 
   
    cout <<"\n\nAfter Bubble Sort "<<endl; 
    for(i=0;i<n;i++)
    	cout<<num[i]<<endl;
    	
    //char sorting
    cout<<"\n\n\nenter no of chars ";
    cin>>n2;
    cout<<"enter values "<<endl;
    for(i=0;i<n2;i++)
    	cin>>alpha[i];
     
    bubble_sort<char>(alpha,n2); 
   
    cout <<"\n\nAfter Bubble Sort "<<endl; 
    for(i=0;i<n2;i++)
    	cout<<alpha[i]<<endl;
   
  return 0; 
}
