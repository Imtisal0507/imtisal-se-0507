// Write a program to check if the given year is a leap year or not.  

#include<stdio.h>
main()

{
	int n;
	printf("Enter year: ");  // user defined value
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("leap year");     
	}
	else
	{
		printf("not a leap year");
	}
}
