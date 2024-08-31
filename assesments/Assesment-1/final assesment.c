#include<stdio.h>
pizza()       // For screen presentation of menue
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




choice()          //choice for user 
{
	int choice,i=1;
for(i=1;i<=4;i++)
{

		printf("\nEnter choice : ");   // Enter a choice for user
		scanf("%d",&choice);
		
		if(choice==1)
		{
         int n=0,i=180;
         printf("You have selected pizza");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);     // addition of amount
           	break;

		}
		

		else if(choice==2)
		{
		         int n=0,i=100;
         printf("You have selected burger");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);     // addition of amount
			break;   	
		}
		else if(choice==3)
		{
			         int n=0,i=120;
         printf("You have selected dosa");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);     // addition of amount
           	break;
		}
		else if(choice==4)
		{
			         int n=0,i=180;
         printf("You have selected Idli");
         
         
           printf("\nEnter the quantity:");
           scanf("%d",&n);
           
           	printf("\nTotal Amount:%d",i*n);           // addition of amount
           	break;
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
	printf("......................MENU.......................");
pizza();
burger();
dosa();
idli();
choice();



	


}


