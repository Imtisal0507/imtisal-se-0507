#include<iostream>
using namespace std;
class Hello{
	public:
		virtual wheel()=0;
		virtual colour()=0;
};
class Truck:public Hello{
	public:
		wheel()
		{
			cout<<"Your total wheel is 6"<<endl;
		}
		colour()
		{
			cout<<"your colour is black"<<endl;
		}
	
};
class Bike:public Hello{
		public:
		wheel()
		{
			cout<<"Your total wheel is 2"<<endl;
		}
		colour()
		{
			cout<<"your colour is white"<<endl;
		}

};
class Car:public Hello{
	public:
		wheel()
		{
			cout<<"Your total wheel is 4"<<endl;
		}
		colour()
		{
			cout<<"your colour is blue"<<endl;
		}		
};


main()
{
	Truck obj;
	obj.wheel();
	obj.colour();
	
	Bike obj1;
	obj1.wheel();
	obj1.colour();
	
	Car obj2;
	obj2.wheel();
	obj2.colour();
 } 


