#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5];
	int i;
	
	printf("Enter a name : ");
	gets(a);
	
	strcpy(b,a);
	
	printf("Copy string is : %s",b);
	}
