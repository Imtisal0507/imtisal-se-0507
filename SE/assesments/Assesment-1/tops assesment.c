//order chart for a bill counter
#include<stdio.h>     
pizza()         //piza section for order
{
	printf("\n1. Pizza         Price = 180rs/pcs");
	
}
burger()       //burger section for order
{
    printf("\n2. Burger        Price = 100rs/pcs");
}
dosa()       //dosa section for order
{
	printf("\n3. Dosa         Price = 120rs/pcs");
}
idli()  //idli section for order
{
	printf("\n4. Idli         Price = 50rs/pcs");
}


choice()   // choice for add value and add food for money counting
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
		scanf("%d",&choice);   //user define calling
		
		if(choice==1)         //choice for user
		{
         int n=0,i=180;
         printf("You have selected pizza");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	

		}
		else if(choice==2)     //choice for user
		{
		         int n=0,i=100;
         printf("You have selected burger");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
			   	
		}
		else if(choice==3)    //choice for user
		{
			         int n=0,i=120;
         printf("You have selected dosa");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	
		}
		else if(choice==4)  //choice for user
		{
			         int n=0,i=50;
         printf("You have selected Idli");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);
           	
		}
		else if(moreOrders == 'y' || moreOrders == 'Y')     //choice for order and calculation
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
choice();   //function for a main method
}

		






