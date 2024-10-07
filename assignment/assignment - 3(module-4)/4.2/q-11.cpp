#include<iostream>
using namespace std;

class AreaRTC{
	
	public:
					//member functions
					//Function overloading
							
		Area(int a,int b)				//Find Area of Rectangle
		{
			cout<<"AREA OF RECTANGLE : "<<a*b<<endl<<endl;
		}
		
		Area(float a,int b,int c)		//Find Area of Triangle
		{
			cout<<"AREA OF TRIANGLE  : "<<a*b*c<<endl<<endl;
		}
		
		Area(int Radius)				//Find Area of Circle
		{
			float pi=3.14;
			cout<<"AREA OF CIRCLE    : "<<pi*Radius*Radius<<endl<<endl;
		}
};

main()
{
	AreaRTC a;			//create object of class
	
	int x,y;
					//user inputs for Rectangle
	cout<<"Enter Ractangle Details : "<<endl;
	cout<<"Length : ";
	cin>>x;
	cout<<"Breath : ";
	cin>>y;
	
	a.Area(x,y); 	//call member function
	
					//user inputs for Triangle
	cout<<"Enter Triangle Details  : "<<endl;
	cout<<"Base   : ";
	cin>>x;
	cout<<"Heigth : ";
	cin>>y;
	
	a.Area(0.5,x,y);	//member function call
	
						//user input for circle
	cout<<"Enter Circle Details    : "<<endl;
	cout<<"Radius   : ";
	cin>>x;
	
	a.Area(x);			//member function call
}

