#include<iostream>
using namespace std;

		//template function
template<typename T>
sort(T a)			//array sorting
{
	int i,j;
	
	cout<<endl<<"Sorted Array : ";
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout<<a[i]<<" ";
	}
}

main()
{
	int i;
			//for int value
	cout<<"int values : ";
	
	int a[5] = {8,9,4,2,6};
	cout<<endl<<"Array : ";
	
	for(i=0; i<5; i++)
		cout<<a[i]<<" ";
	
	sort(a);		//template function call
	
	
	
			//for char value
	cout<<endl<<endl<<"char values : ";
	
	char c[5] = {'X','Z','R','P','M'};
	cout<<endl<<"Array : ";
	
	for(i=0; i<5; i++)
		cout<<c[i]<<" ";
	
	sort(c);		//template function call
	
}

