#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	{
		printf("\nafter swapping a :%d",a);
		printf("\nafter swapping b :%d",b);
	}
}
