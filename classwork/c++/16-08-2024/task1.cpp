#include<iostream>
using namespace std;
class A{
	public:
		name()
		{    
		char a;
		 cout<<"Enter a name:";
		 cin>>a;
		 
		 
		}
};
class B:public A{
	public:
		results()
		{
			int a,b,c;
			cout<<"Enter a maths result :";
			cin>>a;
			cout<<"Enter a english result :";
			cin>>b;
			cout<<"Enter a science result :";
			cin>>c;
			
			
			cout<<"Addition of a result"<<endl<<a+b+c;
			cout<<"Average of result:"<<endl<<a+b+c%3;
			
		}
};








main()
{
B obj;
obj.name();
obj.results();
}
