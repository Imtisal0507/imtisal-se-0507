#include<stdio.h>
main()
{
	int n,i;
	int fac=1;
	printf("Enter a number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	{
		printf("\nfectorial number is:%d",fac);
	}
}
