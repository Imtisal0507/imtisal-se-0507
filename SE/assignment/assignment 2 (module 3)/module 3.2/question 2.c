//Write a program to swap two numbers without using third variable   
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number :");
	scanf("%d",&a);
	printf("Enter number :");
	scanf("%d",&b);
	
	a=a+b;      //without using third veriable
	b=a-b;
	a=a-b;
	
	printf("\n a after swapping value:%d",a);      //swapping 
	printf("\n b after swapping value:%d",b);

}
