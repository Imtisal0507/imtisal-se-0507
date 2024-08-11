#include<stdio.h>
main()
{
	char a[5];
	int i,len=0;
	
	printf("Enter a name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("Length of string : %d",len);
}
