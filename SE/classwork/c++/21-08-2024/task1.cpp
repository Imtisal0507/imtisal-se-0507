#include<iostream>
using namespace std;
class C{
	public:
		int a;
		int b;
		Hello1()
		{
			cout<<"Enter A"<<endl;
			cin>>a;
			cout<<"Enter B"<<endl;
			cin>>b;
		}
};
class A:public C{
	public:
		Hello1()
		{
			cout<<"Hello1"<<endl;
		}
		
};
class B:public A{
	public:
		Hello()
		{
			cout<<"Hello"<<endl;
			
		}
	};
	
	


















main()
{
	A obj;
	B obj1;
	
	obj.Hello1();
	obj1.Hello1();

}
