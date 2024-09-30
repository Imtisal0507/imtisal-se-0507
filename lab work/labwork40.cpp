#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		hekko()
		{ 
			cout<<"Enter a number :";
			cin>>a;
		}
};
class B:public A{
	public:
		hello()
		{
			cout<<"Enter a number :";
			cin>>b;
			
		}
};


main()
{
	B obj;
	
	obj.hekko;
	obj.hello;
}
