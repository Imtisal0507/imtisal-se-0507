#include<stdio.h>
main()
{
	int n,i,fac=1;
	printf("Enter a element :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac);
}
