#include<iostream>
using namespace std;

class Swap{
	
	private:
				//data member
		int a,b;
	
	public:
		
		Swap(int i,int j)		//constructor
		{
			a = i;
			b = j;
		}
	
	friend Swapping(Swap& s);		//declare friend function
	
	display()			//display the result
	{
		cout<<"After Swapping : "<<endl;
		cout<<"A : "<<a<<endl;
		cout<<"B : "<<b<<endl;
	}
};


Swapping(Swap& s)				//friend function definition
{
	s.b = s.a + s.b - ( s.a = s.b );
}

main()
{
	int x,y;
			//user input
	cout<<"Enter Number A : ";
	cin>>x;
	cout<<"Enter Number B : ";
	cin>>y;
	
	Swap s(x,y);  		//object creation
	
	Swapping(s);		//friend function call
	
	s.display();		//member function call
}

