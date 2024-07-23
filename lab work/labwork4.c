#include<stdio.h>
main()
{
	int age;
	printf("enter age : ");
	scanf("%d",&age);
	
	if(age>100)
	{
		printf("invalid age :");
	}
	else if(age>=18)
	{
		printf("eligible for voting :");
	}
	else
	{
		printf("not eligible for voting :");
	}
}
