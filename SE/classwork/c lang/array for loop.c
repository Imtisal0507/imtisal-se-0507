#include<stdio.h>
main()
{
	int a[4];
	int i;
	int sum=0;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter element:");
		scanf("%d",&a[i]);
		 
		 sum=sum+a[i];
	}
		for(i=0;i<4;i++)
	{
		printf("\nEnter element: %d",a[i]);
		
		
    }
    printf("\nsum of value is :%d",sum);
}
