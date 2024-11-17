#include<iostream>
using namespace std;

class Matrix{
	
	private:
			//Data members
		int a[5],i;	
		
	public:
			//Member functions
		input()				//function for input array from the user..
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<i+1<<". : ";
				cin>>a[i];
			}
		}
		
		Matrix operator+(Matrix& m)		//operator overloading for matrix addition
		{
			Matrix temp;
			for(i=0; i<5; i++)
				temp.a[i] = a[i] + m.a[i];
			return temp;
		}
		
		display()						//function for display the result
		{
			for(i=0;i<5;i++)
				cout<<i+1<<". : "<<a[i]<<"  "<<endl;
		}
};

main()
{
	Matrix m1,m2,m;			//create objects of class 
		
	cout<<"Enter 5 numbers for 1st Matrix : "<<endl;
	
	m1.input();				//1st Matrix
	
	cout<<"Enter 5 numbers for 2nd Matrix : "<<endl;
	
	m2.input();				//2nd Matrix
	
	m = m1 + m2;			//Addition using operator overloading
	
	cout<<endl<<"Addition : "<<endl;
	
	m.display();			//call member function for display result 
}

