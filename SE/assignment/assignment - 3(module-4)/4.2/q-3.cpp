#include<iostream>
using namespace std;

class Math{
	
	public:
			// create inline function for multiplication
	inline multiplication(int x,int y)
	{
		return x*y;
	}
			// create inline function for cube.
	inline cube(int z)
	{
		return z*z*z; 
	}
};

main()
{
	Math m; //object creation
	
	int a,b;
			//user inputs
	cout<<"Enter Number A : ";
	cin>>a;
	cout<<"Enter Number B : ";
	cin>>b;
	
			//muliplication and cube using inline functions 
	cout<<"Multiplication : A x B = "<<m.multiplication(a,b)<<endl;
	cout<<"cube of A : "<<m.cube(a)<<endl;
	cout<<"cube of B : "<<m.cube(b);
}
