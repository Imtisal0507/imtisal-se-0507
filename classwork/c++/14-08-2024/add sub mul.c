#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		add()
		{
			cout<<"Enter a number :";
			cin>>a;
			cout<<"Enter a number :";
			cin>>b;
			
			cout<<"Addition of a number :"<<a+b<<endl;
		}
		

};
class B{
	public:
		int a,b;
		sub()
		{
			cout<<"Enter a number :";
			cin>>a;
			cout<<"Enter a number :";
			cin>>b;
			
			cout<<"substraction of a number :"<<a-b<<endl;
		}
		
};
class C{
	public:
		int a,b;
			mul()
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
	A obj:
	obj.add();
	B obj:
	obj.sub();
	C obj:
	obj.mul();
}
