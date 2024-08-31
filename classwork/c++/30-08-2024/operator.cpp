#include<iostream>
using namespace std;

class Image{
	int height,width;
	
	public:
	 Image(int h=0, int w=0)
	{
		
		height=h;  //200,300
		width=w;   //10,15
	}
	
	Image operator +(Image &obj)
	{
		Image result;  //make a new object for addition 
		
		result.height=height + obj.height;
		result.width=width + obj.width;
		
		
		return result;
	}
	
	void print()
	{
		cout<<"\n"<<height<<"*"<<width;
	}
};




main()
{
	Image I1(100,200), I2(10,15);
	Image I3= I1 + I2;
	
	
	I3.print();
}
