#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
	fun1()
	{
		cout<<"Enter a number :";
		cin>>a;
		cout<<"Enter a number :";
		cin>>b;
		
		cout<<"Addition of a number :"<<a+b<<endl;
		
	}
	fun2()
	{
		cout<<"Enter a number :";
		cin>>a;
		cout<<"Enter a number :";
		cin>>b;
		
		cout<<"substracytion of a number :"<<a-b<<endl;
		
	}
	fun3()
	{
		cout<<"Enter a number :";
		cin>>a;
		cout<<"Enter a number :";
		cin>>b;
		
		cout<<"multiplication of a number :"<<a*b<<endl;
	}
	
};

main()
{
	A obj; //object creation
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
