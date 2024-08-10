#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number :");
	scanf("%d",&a);
	printf("Enter number :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n a after swapping value:%d",a);
	printf("\n b after swapping value:%d",b);

}
