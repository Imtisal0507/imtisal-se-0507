//Write a program to print factorial of given number   
#include<stdio.h>
main()
{
	int n,i,fac=1;
	printf("Enter a element :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;          // formula of factorial number 
	}
	printf("%d",fac);
}
