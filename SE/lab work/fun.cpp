#include<iostream>
using namespace std;
class A{
	public:
		son()
		{
			cout<<"son has a bike";
		}
};
class B:public A{
	public:
		father()
		{
			cout<<"Father has a car";
		}
};
class C:public B{
	public:
		grandfather()
		{
			cout<<"Grandfather has a super car";
		}
};


main()
{
	C obj;
	obj.son();
	obj.father();
	obj.grandfather();
	
}
