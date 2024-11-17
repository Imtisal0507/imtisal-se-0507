//Write a program to find number is even or odd  
#include<stdio.h>
main()
{
	int n;
	printf("enter number n : ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("%d is zero : ");          
	}
	else if(n%2==0)
	{
		printf("%d is even number : ");
	}
	else
	
	{
		printf("%d is odd : ");
	}
}

