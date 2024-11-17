#include<iostream>
using namespace std;

class Employee{
	public:
		info()
		{
			cout<<"Your salary will transfer in your account "<<endl;
		}
		virtual salary()=0;    //pure virtual function
};
class Nishit:public Employee{
	public:
		salary()
		{
			cout<<"salary is 20k"<<endl;
		}
};
class Meet:public Employee{
	public:
		salary()
		{
			cout<<"salary is 10k"<<endl;
		}
	};
class Rahul:public Employee{
	public:
		salary()
		{
			cout<<"salary is 30k"<<endl;
		}
	};
	
	
	
	main()
	{
		Nishit obj;
		obj.info();
		obj.salary();
		
		
		
		Meet obj1;
		obj1.info();
		obj1.salary();
		
		
		
		Rahul obj2;
		obj2.info();
		obj2.salary();
	}
