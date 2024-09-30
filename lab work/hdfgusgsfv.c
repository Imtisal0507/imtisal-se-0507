#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,n;
	int i;
	printf("Enter a number :");
	scanf("%d",&n);
	
	printf("%d",n1);
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++)
	{
		n3=n2+n1;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;
		
	}
}
