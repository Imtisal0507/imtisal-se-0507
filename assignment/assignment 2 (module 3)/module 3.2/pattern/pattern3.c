#include<stdio.h> 
main()
{
	int i,k,j;
	int n=5,z=1;
	
	for(i=0;i<n;i++) 
	{
		for(k=0;k<=n-i-1;k++)  
		{
			printf("  ");
		}
		for(j=1;j<=z;j++)  
		{
			printf(" *");
		}
		printf("\n");
		z+=2;
	}
}
