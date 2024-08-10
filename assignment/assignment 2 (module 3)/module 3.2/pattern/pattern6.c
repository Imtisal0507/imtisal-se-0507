#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		char c='A';
		for(j=1;j<=i;j++)
		{
			printf(" %c",c);
			c++;
		}
		printf("\n");
	}
}
