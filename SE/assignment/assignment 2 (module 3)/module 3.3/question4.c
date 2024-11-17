//WAP to find factorial using recursion  
#include <stdio.h>
factorial() 
{

	int n,i,fac=1;
	printf("enter number : " );
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	
	{
		fac=fac*i;             // formula of factorial
	}
	{
		printf("fectorial number :%d",fac);
		
		
	}
	
}


main() 
{
factorial();
}

