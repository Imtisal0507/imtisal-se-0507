#include <stdio.h>

main()

{
	
	
	const char *foods[]= {"pizza","burger","dosa","idli"};
	float prices[]={180,100,120,150};
	int choice,quantity;
	float total=0;
	char moreOrders;
	int orderedQuantities[4] = {0, 0, 0, 0};
	do{
		
		printf("...............Manu...............\n");
    	printf("1. %s\t Price = %.2f\n", foods[0],prices[0]);
    	printf("2. %s\t Price = %.2f\n", foods[1],prices[1]);
    	printf("3. %s\t\t Price = %.2f\n", foods[2],prices[2]);
    	printf("4. %s\t\t  Price = %.2f\n", foods[3],prices[3]);
    	printf("Enter your choice:");
		scanf("%d",&choice);
		if(choice >=1 && choice <=4)
		{
			printf("You have selected %s\n",foods[choice-1]);
			
			printf("Enter quantity: ",quantity);
			scanf("%d",&quantity);
	
			float amount = prices[choice - 1] * quantity; 
			printf("Amount : %.2f\n",amount);
			
			total += amount;
				printf("Total amount is: %f\n",total);
		}
		else
		{
			printf("invalid choise, Please enter valid number between 1 and 4\n");
		}
		
		printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);
	}
	while(moreOrders == 'y' || moreOrders == 'Y');
		
		printf("Your total amount is %.2f\n",total);


	
}

