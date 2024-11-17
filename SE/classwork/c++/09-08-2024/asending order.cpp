#include<iostream>
using namespace std;

main()
{
	int a[4];
	int i,j,temp;
	
	for(i=0;i<4;i++)
	{
		cout<<"Enter a number :";
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Enter a number :";
		cin>>a[i];
		
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cin>>a[i];
	}
}
