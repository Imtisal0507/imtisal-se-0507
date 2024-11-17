#include<stdio.h>
main()
{
	printf("****************Welcome to the game****************\n");
	printf("\n****************Choose the number between 1 to 50********************\n");
	printf("\n****************Guess the number******************\n");
	
	while(1)
	{
		int n=12;
		int choice;
		printf("Enter number");
		scanf("%d",&choice);
		
		if(choice>50)
		{
			printf("Invalid number!!!!!!!!!!!!!!!!!!!");
			break;
		}
		else if(choice==n)
		{
			printf("You are winnerrr.............");
			break;
		}
		else if(choice<n)
		{
			printf("%d is smaller than the original number ",choice);
		}
		else
		{
			printf("%d is greater than the original number ",choice);
		}
	}
}
