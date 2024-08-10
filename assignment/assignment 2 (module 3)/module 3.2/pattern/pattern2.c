#include<stdio.h> 
main()
{
	int i,j,n=65;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",n);
			n++;
		}
		printf("\n");
	}
	
}
