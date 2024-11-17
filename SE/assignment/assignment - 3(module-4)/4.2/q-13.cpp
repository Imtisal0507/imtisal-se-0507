#include<iostream>
using namespace std;

class Max{
	
	private:
			//Data Members
		int a,b;
		
	public:
		Max(int i, int j)		//constructor
		{
			a = i;
			b = j;
		}
		
	friend int maxnumber(Max& m);	//declare friend function 
};

	
int maxnumber(Max& m)		//friend function definition
{
	return ( (m.a>m.b) ? m.a : m.b );		//ternary operator
}

main()
{
	int x,y;
			//user input
	cout<<"Enter a Number A : ";
	cin>>x;
	cout<<"Enter a Number B : ";
	cin>>y;
	
	Max m(x,y); 		//object creation
	
	cout<<endl<<"Max Number : "<<maxnumber(m);		//friend function call
}

