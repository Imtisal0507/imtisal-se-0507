#include<stdio.h>
main()

{
	int n;
    printf("enter number : ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("%d is zero", n);
	}
	else if(n%2==0)
	{
		printf("%d is even", n);
		
	}
	else
	{
		printf("%d is odd", n);
	}
	
	
	
}
