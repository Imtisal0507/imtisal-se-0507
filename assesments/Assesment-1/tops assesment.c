#include<stdio.h>
pizza()
{
	printf("\n1. Pizza         Price = 180rs/pcs");
	
}
burger()
{
    printf("\n2. Burger        Price = 100rs/pcs");
}
dosa()
{
	printf("\n3. Dosa         Price = 120rs/pcs");
}
idli()
{
	printf("\n4. Idli         Price = 50rs/pcs");
}


choice()
{
	while(1)
{
	int i,n;
	printf("\n......................MENU.......................");
pizza();
burger();
dosa();
idli();


char choice;
char moreOrders;
char total;


		printf("\nEnter choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
         int n=0,i=180;
         printf("You have selected pizza");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	

		}
		else if(choice==2)
		{
		         int n=0,i=100;
         printf("You have selected burger");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
			   	
		}
		else if(choice==3)
		{
			         int n=0,i=120;
         printf("You have selected dosa");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	
		}
		else if(choice==4)
		{
			         int n=0,i=50;
         printf("You have selected Idli");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	
		}
		else if(moreOrders == 'y' || moreOrders == 'Y')
		{
			printf("Your total amount is %.2f\n",total);

		}
		else
		{
			printf("Invalid choice!!!!!!!!!!!!!");
			break;
		}
	}
}


main()
{
choice();
}

		






