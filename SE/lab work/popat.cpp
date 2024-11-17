#include<iostream>
using namespace std;
class A{
	public:
	fun()
	{
		cout<<"HELLO";
		
	}
};
class B:public A{
	public:
	fun1()
	{
		cout<<"HELLO";
		
	}
};
class C:public B{
	public:
	fun2()
	{
		cout<<"HELLO";
		
	}
};



main()
{
	C obj;
	obj.fun();
	obj.fun1();
	obj.fun2();
}
