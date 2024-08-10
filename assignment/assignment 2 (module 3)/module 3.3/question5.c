#include<stdio.h>
asending()
{
	int a[4],temp;
	int i,j;
	
	for(i=0;i<4;i++)
	{
		printf("\n enter element : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
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
	printf("\n asci number :%d",a[i]);
		}		
	}
desending()
{
	int a[4],temp;
	int i,j;
	
	for(i=0;i<4;i++)
	{
		printf("\n enter element : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]<a[j])
		{
				
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
			}
		}
		for(i=0;i<4;i++)
{
	printf("\n asci number :%d",a[i]);
		}		
	}
main()
{
	asending();
	desending();
}

