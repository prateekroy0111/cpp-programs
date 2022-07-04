#include<iostream>
#include<conio.h>
using namespace std;

class matrix
{
	int mat[3][3];
	
	public:
		void input_matrix();
		void display_matrix();
		matrix operator*(matrix mat2);
		matrix operator-(matrix mat2);

};

void matrix::input_matrix()
{
	int i,j;
	cout<<"\n\nenter Matrix elements\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat[i][j];
		}
	}
}

void matrix::display_matrix()
{  
	int i,j;
	cout<<"Matrix Display:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

matrix matrix::operator-(matrix mat2)
{
	matrix mat3;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3.mat[i][j] = mat[i][j] - mat2.mat[i][j];
		}
	}
	return mat3;
}

matrix matrix::operator*(matrix mat2)
{
	matrix mat4;
	int i,j,k,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum += (mat[i][k] * mat2.mat[k][j]);
			}
			mat4.mat[i][j]	= sum;
		}
	}
	return mat4;
}

int main()
{
	matrix m1;
	m1.input_matrix();
	cout<<"Matrix1"<<endl;
	m1.display_matrix();
	
	matrix m2;
	m2.input_matrix();
	cout<<"Matrix2"<<endl;
	m2.display_matrix();
	
	matrix m3;
	m3 = m1 - m2;
	cout<<"Matrix1 - Matrix2"<<endl;
	m3.display_matrix();
	
	matrix m4;
	m4 = m1 * m2;
	cout<<"Matrix1 * Matrix2"<<endl;
	m4.display_matrix();
		
	return 0;
}

