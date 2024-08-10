//Write a program to print Fibonacci series up to given numbers  
#include<stdio.h>
main()
{
	int i,n1=0,n2=1,n,n3;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("%d",n1);           // n1 and n2 is constant in febonacci series
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++)             // febonacci is starting is 3
	{
		n3=n1+n2;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;
	}

}
