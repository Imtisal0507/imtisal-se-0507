#include<stdio.h>
fac()       //function 
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
	int choice;
	printf("press 1 for Factorial");
	printf("press 2 for Addition");
	printf("press 3 for Substraction");
	printf("press 4 for Multiplication");
	printf("press 5 for Exit");
	while(1)
	
	{
		printf("Enter choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			fac();	
		}
		else if(choice==2)
		{
			add();
		}
		else if(choice==3)
		{
			sub();
		}
		else if(choice==4)
		{
			mul();
		}
		else if(choice==5)
		{
			printf("Thank you!!!!!!!!!");
		}
		else 
		{
			printf("Invalid choice!!!!!!!!!!!!!!!!");
		}
	}
}