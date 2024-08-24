#include<iostream>
using namespace std;
class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
};
class B:public A{
	public:
		myfun()
		{
			A::myfun();
			cout<<"World";
		}
};






main()
{
	B obj;
	obj.myfun();
}
