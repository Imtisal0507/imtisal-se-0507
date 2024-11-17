#include<iostream>
using namespace std;
class Hello{
	public:
		Hello()  //    constructor
		{
			cout<<"Welcome to a our website "<<endl;
		}
		reverse()
		{
			int n,rev,res=0;
			cout<<"Enter a number :";
			cin>>n;
			while(n!=0)
			{
				res = n%10;
				rev =rev*10+res;
				n/=10;
			}
			cout<<"Reverse number is :"<<rev<<endl;
		}
		~Hello()  // distructor
		{
			cout<<"Thank you for a using our website!!!";
		}
};

main()
{
	Hello obj;
	obj.reverse();
		
}
