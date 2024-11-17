#include<iostream>
using namespace std;

		//function template
template<typename T>
swapnumbers(T x, T y)		//swap two numbers
{
	T temp = x;
	x = y;
	y = temp;
	
	cout<<"A : "<<x<<"    B : "<<y<<endl<<endl;
}

main()
{
			//for int type
	cout<<"int VALUES : "<<endl;
	cout<<"A : 5    B : 10"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<int>(5,10);		//call the template function
	
			//for float type
	cout<<"float VALUES : "<<endl;
	cout<<"A : 2.45    B : 61.9"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<float>(2.45,61.9);		//call the template function
	
			//for string type
	cout<<"string VALUES : "<<endl;
	cout<<"A : kya    B : hua"<<endl;
	
	cout<<"After Swapping : "<<endl;
	swapnumbers<string>("kya","hua");		//call the template function
}

