#include<stdio.h>
main()
{  

    int n1,n2,sum=0; 
	printf("Enter number :");
	scanf("%d",&n1);
	printf("Enter number :");
	scanf("%d",&n2);
	
	printf("\nAddition of number:%d",sum=n1+n2);
	printf("\nSubtraction of number:%d",sum=n1-n2);
	printf("\nMultiplication of number:%d",sum=n1*n2);
	printf("\nDivision of number:%.2f",(float)n1/n2);
	printf("\nModulo of number:%d",sum=n2%n1);	
}
