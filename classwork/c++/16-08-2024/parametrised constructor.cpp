#include<iostream>
using namespace std;

class Myclass{
	public:
		Myclass(int a,int b)   // parameteriesd constructor
		{
			cout<<"A :"<<a;
			cout<<"B :"<<b;
		}
};





main()
{
  Myclass obj(10,20);	
}
