#include<iostream>
using namespace std;
class Get{
	public:
		int c,d;
		getter(int a,int b)
		{
			cout<<"A :"<<a<<endl;
			cout<<"B :"<<b<<endl;
			
			
			this->c=a;
			this->d=b;
		}
		setter()
		{
			cout<<"Addition :"<<this->c+this->d;
		}
};
main()
{
     Get obj;
	obj.getter(10,20);
	obj.setter();
}
