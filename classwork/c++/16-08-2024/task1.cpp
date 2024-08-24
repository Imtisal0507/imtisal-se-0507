#include<iostream>
using namespace std;
class A{
	public:
		name()
		{  
		int i;  
		char a[100];
		 cout<<"Enter a name:";
		 cin>>a[i];
		 
		 
		}
};
class B:public A{
	public:
		results()
		{
			int a,b,c;
			cout<<"Enter a maths result :"<<endl;
			cin>>a;
			cout<<"Enter a english result :"<<endl;
			cin>>b;
			cout<<"Enter a science result :"<<endl;
			cin>>c;
			
			
			cout<<"Total result :"<<a+b+c<<endl;
			cout<<"persentage :"<<endl<<a+b+c%3;
			
		}
};








main()
{
B obj;
obj.name();
obj.results();
}
