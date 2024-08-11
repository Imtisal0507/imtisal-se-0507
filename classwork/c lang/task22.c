#include<stdio.h>
main()

{
	int n,i,fac=1;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++);
	{
		fac=fac*i;
	}
	{
		printf("factorial number :%d ",fac);

	}
}
