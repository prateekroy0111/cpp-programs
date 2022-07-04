#include <iostream>  
using namespace std;  
class Shape    //abstract class with 1 pure virtual fn 
 			  //no object can be created of an abstract class only pointer
{    
    public:   
    	virtual void draw()=0;  //pure virtual fn becoz it has no body  
};    
class Rectangle : public Shape    
{    
    public:  
	    void draw()
		//if pure virtual fn is not defined in this class then 
		//this class becomes an abstract class
	    {    
	        cout <<"drawing rectangle..." <<endl;    
	    }    
};    
class Circle : public Shape    
{    
    public:  
	    void draw()    
	    {    
	        cout <<"drawing circle..." <<endl;    
	    }    
};    
int main( ) {  
	Shape *sp; //pointer can be used like we use in virtual class
	Rectangle rec;  
    Circle cir; 
	sp=&rec;
	sp->draw();
	sp=&cir;
	sp->draw(); 
    /*rec.draw();    
    cir.draw();*/   
   return 0;  
}  
