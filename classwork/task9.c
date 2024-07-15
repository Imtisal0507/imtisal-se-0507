#include<stdio.h>
main ()

{
	int n1,n2,n3;
    printf("enter value 1 : ");
	scanf("%d",&n1);
	printf("enter value 2 : ");
	scanf("%d",&n2);
	printf("enter value 3 : ");
	scanf("%d",&n3);
    
    if(n1>n2 && n1>n3)
    {
    	printf("%d is greatest ", n1);
    	
	}
	else if(n2>n3 && n2>n1)
	{
		printf("%d is greatest", n2);
	}
	else
	{
		printf("%d is greatest", n3);
	}
	
}
