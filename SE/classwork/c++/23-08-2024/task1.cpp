#include<iostream>
using namespace std;
class A{
	public:
		fun1(int a,int b)
		{
			cout<<"Hello "<<endl;
		}
		fun1(int a)
		{
			cout<<"World"<<endl;
		}
		fun1()
		{
			cout<<"Wow";
		}
};



main()
{
	A obj;
	obj.fun1(10,20);
	obj.fun1(30);
	obj.fun1();
	
}
