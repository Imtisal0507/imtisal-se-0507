// sum of even number and sum of odd number
#include<stdio.h>
main()
{
	int n,i=1,ev=0,odd=0,evcount=0,oddcount=0;
	
	while(i<=5);
	printf("enter number :");
	scanf("%d",&n);
	{                           
		if(n%2==0)        //defined even number 
		{
			printf("number is eve number : ",n);
			ev++;      
			evcount=evcount+i;         // counting of even numbers 
		}
		else
		{
			printf("number is odd number : ",n);
			odd;
			oddcount=oddcount+i;       // counting of odd numbers
		}
		i++;
	}
	printf("\nsum of even :%d",ev);
	printf("\nsum of odd :%d",odd);
	printf("\nsum of evencount :%d",evcount);
	printf("\nsum of oddcount :%d",oddcount);
	
}

