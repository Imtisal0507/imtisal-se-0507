#include<stdio.h>
main()
{
	printf("********Welcome to the game***********\n");
	printf("\n*******Enter number between 1 to 50*********\n");
	
	while(1)
	{
		int n=35;
		printf("\n***********Enter original number************\n");
		int choice;
		printf("\nEnter number");
		scanf("%d",&choice);
		
		if(choice>50)
		{
			printf("Invalid number!!!!");
			break;
		}
		else if(choice==n)
		{
			printf("You are win");
			break;
		}
		else if(choice<n)
		{
			printf("%d Number is smaller than original number",choice);
		}
		else
		{
			printf("%d Number is greater than choice",choice);
		}
	}
	
}
