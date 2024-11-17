#include<iostream>
using namespace std;
class A{
	protected :
		
			int a;
			int b;
		
};
class B{
	public:
		Hello()
		{
			cout<<"Hello"<<endl;
			
		}
};
class C:public A,public B{
	public:
		Hello1()
		{
			cout<<"Enter A"<<endl;
			cin>>a;
			cout<<"Enter B"<<endl;
			cin>>b;
		}
};










main()
{
	
}
