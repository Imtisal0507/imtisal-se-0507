#include<iostream>
using namespace std;
class A{
	public:
		int a;
};
class B:public A{
	public:
		hello()
		{
			cout<<"Enter a number :";
			cin>>a;
		}
};
class C{
	public:
		int b;
};
class D:public A,public C{
	public:
		hello1()
		{
			cout<<"Enter a number :";
			cin>>b;
		}
};




main()
{
	D obj;
	obj.hello1;
}
