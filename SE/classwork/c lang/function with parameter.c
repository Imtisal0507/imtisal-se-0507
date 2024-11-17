#include<stdio.h>
fac(int n)       //function 
{
	int i,fac=1;
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("Factorial number :%d",fac);
}

add(int a,int b)
{
	
	printf("Addition number :%d",a+b);
}
sub(int a,int b)
{
	
	printf("Sub number :%d",a-b);
}

mul(int a,int b)
{

	
	printf("mul number :%d",a*b);
}


main()
{
	int choice;
	printf("press 1 for Factorial");
	printf("\npress 2 for Addition");
	printf("\npress 3 for Substraction");
	printf("\npress 4 for Multiplication");
	printf("\npress 5 for Exit");
	while(1)
	
	{
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			fac(5);	
		}
		else if(choice==2)
		{
			add(2,2);
		}
		else if(choice==3)
		{
			sub(2,2);
		}
		else if(choice==4)
		{
			mul(2,2);
		}
		else if(choice==5)
		{
			printf("Thank you!!!!!!!!!");
			break;
		}
		else 
		{
			printf("Invalid choice!!!!!!!!!!!!!!!!");
			break;
		}
	}
}
