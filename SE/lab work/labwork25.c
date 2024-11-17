#include<stdio.h>
main()
{
	printf("*************************Welcome to the game*******************************\n");
	printf("\n*************************Choose the number between 1 to 50**********************\n");
	printf("\n*************************Enter original number********************************\n");
	
	while(1)
	{
		int n=30;
		int choice;
		
		printf("enter number : ");
		scanf("%d",&choice);
		
		if(choice>50)
		{
			printf("Invalid number");
			break;
		}
		else if(choice==n)
		{
			printf("You win the game");
			break;
		}
		else if(choice<n)
		{
			printf("%d is smaller than original  number",choice);
		}
		else
		{
			printf("%d is greater than original number",choice);
		}
 		
		
	}
}
