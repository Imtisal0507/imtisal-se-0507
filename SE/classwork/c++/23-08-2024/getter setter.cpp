#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		hello()
		{
			int a,b;
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B :";
			cin>>b;
			this->a=a;
			this->b=b;
		}
		hello1()
		{
			cout<<"A :"<<this->a<<endl;
			cout<<"B :"<<this->b;
		}
};






main()
{
   A obj;
   obj.hello();
   obj.hello1();
}
