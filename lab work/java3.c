#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}

}
