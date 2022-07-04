#include <iostream>
using namespace std;
 
class Student
{
    protected:
        int roll_no;
 
    public:
        void set_roll(int r)
        {
            roll_no=r;
        }
 
        void display_roll()
        {
            cout<<"Roll No = "<<roll_no<<endl;
 
        }
};
 
class Test: virtual public Student
{
    protected:
        float marks1, marks2;
 
    public:
        void set_marks(float m1, float m2)
        {
            marks1 = m1;
            marks2 = m2;
        }
 
        void display_submarks()
        {
            cout<<"Subject Marks = "<<marks1<<" & "<<marks2<<endl;
        }
}; 
 
class Sports: public virtual Student
{
    protected:
        float s_marks;
 
    public:
        void set_smarks(float m)
        {
            s_marks=m;
        }
 
        void display_smarks()
        {
            cout<<"Sports Marks = "<<s_marks<<endl;
        }
 
};
 
class Result: public Test, public Sports
{
    float total;
 
    public:
        void final_marks()
        {
            total = marks1 + marks2 + s_marks;
            cout<<"\n\nTotal Marks = "<<total<<endl;
            
            display_roll();
            display_submarks();
            display_smarks();
        }
};

int main()
{
	int roll;
	float m1,m2,spm;
	
	cout<<"Enter Roll No  ";
	cin>>roll;
	cout<<"Enter Marks1  ";
	cin>>m1;
	cout<<"Enter Marks2  ";
	cin>>m2;
	cout<<"Enter Sports Marks  ";
	cin>>spm;
	
    Result obj;
    obj.set_roll(roll);
    obj.set_marks(m1,m2);
    obj.set_smarks(spm);
    obj.final_marks();    
 
    return 0;
}

