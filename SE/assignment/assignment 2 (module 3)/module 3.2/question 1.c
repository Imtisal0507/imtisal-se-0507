//WRITE A PROGRAM to make simple calculator 
#include<stdio.h>
main()
{  

    int n1,n2,sum=0; 
	printf("Enter number :");  
	scanf("%d",&n1);
	printf("Enter number :");
	scanf("%d",&n2);
	
	printf("\nAddition of number:%d",sum=n1+n2);   // Addition
	printf("\nSubtraction of number:%d",sum=n1-n2);//  substraction
	printf("\nMultiplication of number:%d",sum=n1*n2);  //multiplication
	printf("\nDivision of number:%.2f",(float)n1/n2);  //division
	printf("\nModulo of number:%d",sum=n2%n1);	//modulo
}
