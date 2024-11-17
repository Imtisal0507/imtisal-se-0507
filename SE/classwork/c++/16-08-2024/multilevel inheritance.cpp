#include<iostream>
using namespace std;
class A{
	public:
		home()
		{
			cout<<"Grandfather has a home"<<endl;
		}
};
class B:public A{
	public:
		car()
		{
			cout<<"Father has a car"<<endl;
		}
};
class C:public B{
	public:
		respect()
		{
			cout<<"Child has a respect in a market"<<endl;
		}
};








main()
{
	C obj;
	obj.home();
	obj.car();
	obj.respect();
}
