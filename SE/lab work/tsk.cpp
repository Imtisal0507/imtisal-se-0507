#include<iostream>
using namespace std;
class A{
	public:
		int a;
		
};
class B:public A{
	public:
	Hello()
	{
		cout<<"Enter a number :"<<endl;
		cin>>a;
		}	
};
class C{
	public:
		int b;
};
class D:public B,public C{
	public:
		Hello1()
		{
			cout<<"Enter a number :"<<endl;
			cin>>b;
		}
};

 

main()
{
D obj;
obj.Hello();
obj.Hello1();	
}

