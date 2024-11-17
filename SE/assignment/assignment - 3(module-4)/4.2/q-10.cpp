#include<iostream>
using namespace std;

class Combine{
	
	private:
			//data members
		string s;
		
	public:	
			//member functions
		input()		//function for input string from user.
		{
			getline(cin,s);
		}
		
		Combine operator+(Combine& c)		//operator overloading
		{
			Combine temp;
			
		    temp.s = s + c.s; 				// Using string concatenation
			
			return temp;		
		}
		
		display()		//display string
		{
			cout<<s;
		}
};

main()
{	
	Combine str1,str2,str;		//create objects of class
	
	cout<<"Enter String A : ";
	
	str1.input();			//1st string
	
	cout<<"Enter String B : ";
	
	str2.input();			//2nd string	
	
	str = str1 + str2 ;		//operator overloading
	
	cout<<"After concatenate the two strings : ";
	
	str.display();			//function call for display string
}

