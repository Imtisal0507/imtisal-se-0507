#include<stdio.h>
main()
{
	int n;
	printf("Enter numbere :");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("Number is zero");
	}
	else if(n%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
