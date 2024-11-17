#include<iostream>
using namespace std;
class A{
	public:
		Hello()
		{
			cout<<"Hello"<<endl;
		}
};
class B{
	public:	
	Hello1()
		{
			cout<<"Hello1"<<endl;
		}
	
};
class C:public A{
	public:
		Hello2()
		{
			cout<<"Hello2"<<endl;
		}
};
class D:public B{
	public:
		Hello3()
		{
			cout<<"Hello3"<<endl;
		}
};











main()
{
A obj;
obj.Hello();
obj.Hello();
obj.Hello();
obj.Hello();
	
}
