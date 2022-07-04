//Apply Multiple Inheritance:  Derive Mtech student class from employee class  and student class

#include<string.h>
#include<iostream>
using namespace std;

class Employee
{
    protected:
        float salary;
        char emp_id[10];
        char emp_type[10];

    public:
        void set_empid(char* empid)
        {
            strcpy(this->emp_id,empid);
        }
        
        char* get_empid()
        {
            return emp_id;
        }

        void set_salary(float sal)
        {
            this->salary = sal;
        }

        float get_salary()
        {
            return salary;
        }
        
        void set_emptype(char* emptype)
        {
            strcpy(this->emp_type,emptype);
        }
        
        char* get_emptype()
        {
            return emp_type;
        }
};

class Student
{
    protected:
        char gr_no[10];
        char name[20];

    public:
        void set_grno(char* gr)
        {
            strcpy(this->gr_no,gr);
        }
        
        char* get_grno()
        {
            return gr_no;
        }

        void set_name(char* nm)
        {
            strcpy(this->name,nm);
        }
        
        char* get_name()
        {
            return name;
        }
};

class Mtech : public Employee, public Student
{
    private:
        char branch[10];
        char year[5];
    
    public:
        void set_branch(char* br)
        {
            strcpy(this->branch,br);
        }
        
        char* get_branch()
        {
            return branch;
        }

        void set_year(char* yr)
        {
            strcpy(this->year,yr);
        }
        
        char* get_year()
        {
            return year;
        }
};

int main()
{
    char name[20], grno[10], branch[10], year[5], empid[10], emptype[10];
    float salary;
    cout<<"Enter Student\'s name = ";
    gets(name);
    cout<<"Enter Student\'s GR No = ";
    gets(grno);
    cout<<"Enter Student\'s branch = ";
    gets(branch);
    cout<<"Enter Student\'s year = ";
    gets(year);
    cout<<"Enter Emp Id = ";
    gets(empid);
    cout<<"Enter Emp Type = ";
    gets(emptype);
    cout<<"Enter Emp Salary = ";
    cin>>salary;

    Mtech obj1;
    obj1.set_branch(branch);
    obj1.set_empid(empid);
    obj1.set_name(name);
    obj1.set_emptype(emptype);
    obj1.set_salary(salary);
    obj1.set_year(year);
    obj1.set_grno(grno);

	cout<<"\n\n-----View Details-----\n\n";
	
    cout<<"Name = "<<obj1.get_name()<<"\nGR No = "<<obj1.get_grno()<<"\nBranch = "<<obj1.get_branch()<<endl;
    cout<<"Year = "<<obj1.get_year()<<"\nEmp ID = "<<obj1.get_empid()<<"\nEmp Type = "<<obj1.get_emptype()<<endl;
    cout<<"Salary = "<<obj1.get_salary()<<endl;

    return 0;
}
