#include <stdio.h>
factorial() 
{

	int n,i,fac=1;
	printf("enter number : " );
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	
	{
		fac=fac*i;
	}
	{
		printf("fectorial number :%d",fac);
		
		
	}
	
}


main() 
{
factorial();
}

