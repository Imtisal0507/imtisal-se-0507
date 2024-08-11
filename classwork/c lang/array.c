#include<stdio.h>
fac()
{
	int n,i,fac=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("Factorial number :%d",fac);
}

add()
{
	int a,b;
	printf("\nEnter number :");
	scanf("%d",&a);
	printf("\nEnter number :");
	scanf("%d",&b);
	
	printf("Addition number :%d",a+b);
}
sub()
{
	int a,b;
	printf("\nEnter number :");
	scanf("%d",&a);
	printf("\nEnter number :");
	scanf("%d",&b);
	
	printf("Sub number :%d",a-b);
}

mul()
{
	int a,b;
	printf("\nEnter number :");
	scanf("%d",&a);
	printf("\nEnter number :");
	scanf("%d",&b);
	
	printf("mul number :%d",a*b);
}
main()
{
	fac();
	add();
	sub();
	mul();
}
