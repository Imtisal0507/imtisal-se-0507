#include<stdio.h>

fun()
{
	int n,i,fac=1;
	printf("Enter a number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
add()
{
	int n,n1;
	printf("Enter number 1:  ");
	scanf("%d",&n);
	printf("Enter number 2:  ");
	scanf("%d",&n1);
	
	
	return n+n1;
}
main()
{
	printf("%d",fun());
	printf("%d",add());
	
}
