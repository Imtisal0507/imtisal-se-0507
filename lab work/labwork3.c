#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter value A: ");
	scanf("%d",&a);
	printf("enter value B: ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("\nafter swapping value A :%d",a);
	printf("\nafter swapping value B :%d",b);
	
}
