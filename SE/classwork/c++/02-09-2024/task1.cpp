#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		
		friend class B;
};
class B{
	public:
		show(A& obj)
		{
			cout<<"Enter A :";
			cin>>obj.a;
			cout<<"Enter B :";
			cin>>obj.b;
			
			cout<<"Addition :"<<obj.a+obj.b;
		}
};

main()
{
	A obj;
	B obj1;
	obj1.show(obj);
}
