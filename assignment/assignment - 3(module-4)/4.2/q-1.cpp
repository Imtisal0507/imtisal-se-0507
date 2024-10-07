#include<iostream>
using namespace std;

class Calculator // class creation 
{
	public:
	
	int x,y;	// data members
		
	//member functions
	add(int x,int y)
	{
		cout<<endl<<"Addition    :"<<x+y;		
	}	
	
	sub(int x,int y)
	{
		cout<<endl<<"Subtraction :"<<x-y;		
	}	
	
	mul(int x,int y)
	{
		cout<<endl<<"Mulpliction :"<<x*y;		
	}	
	
	div(int x,int y)
	{
		cout<<endl<<"Division    :"<<static_cast<float>(x)/y;		
	}	
};

main()
{
	Calculator c ;		//object declaration
	cout<<"Enter Number A : ";
	cin>>c.x;
	cout<<"Enter Number B : ";
	cin>>c.y;
	
	//call member functions
	c.add(c.x,c.y);			
	c.sub(c.x,c.y);
	c.mul(c.x,c.y);
	c.div(c.x,c.y);
}
