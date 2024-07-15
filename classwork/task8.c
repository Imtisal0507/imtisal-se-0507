#include<stdio.h>
main ()

{
	int n1,n2,n3;
	printf("enter value a : ");
	scanf("%d"&n1);
	printf("enter value b : ");
	scanf("%d"&n2);
	printf("enter value c : ");
	scanf("%d"&n3); // 60 25 15
	
	if(n1>n2)
	{
		if(n1>n3)
		printf("%d is greatest  ", n1);
		
		{ 
		else 
		printf("%d is gretest", n3);
		
		}
		
	}
	else
	{
		printf("%d is greatest ", n3);
	}
}
