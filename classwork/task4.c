#include<stdio.h>
main()
{
	int age;
	printf("enter aghe : ");
	scanf("%d", &age);
	
	if(age>=100)
	{ 
	printf("invalid age.......");
	}
	else if(age>=18)
	{
		printf("eligible........");
	}
	else
	{
		printf("not eligible.....");
	}
}
