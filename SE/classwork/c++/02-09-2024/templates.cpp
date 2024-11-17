#include<iostream>
using namespace std;

template<typename Hello>
Hello greatest (Hello a, Hello b)
{
	if(a>b)
	{
		cout<<"A is greatest"<<endl;
	}
	else
	{
		cout<<"B is greatest"<<endl;
	}
}

main()
{
	
	
	greatest<int>(30,20);
	greatest<char>('a','e');
}
