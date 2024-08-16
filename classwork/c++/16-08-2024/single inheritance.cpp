#include<iostream>
using namespace std;


class A{
	public:
	myfun()
	{
		cout<<"This is a parents class";
	}
};
class B:public A{
	public:
	myfun1()
	{
		cout<<"This is a child clas";
	}
};






main()
{
	B obj;
	obj.myfun();
	obj.myfun1();
}
