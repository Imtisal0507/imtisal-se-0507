#include<stdio.h>
main()
{
	int i,k,j;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}
