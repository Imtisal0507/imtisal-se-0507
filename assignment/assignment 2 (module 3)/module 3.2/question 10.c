#include <stdio.h>
main() 
{
    int n, sum = 0, remainder;

    
    printf("Enter a numbers: ");
    scanf("%d", &n);

    
    if (n < 0) 
	{
        n = -n;
    }


    while (n != 0) 
	{
        remainder = n%10; 
        sum+= remainder;      
        n/= 10;     
    }

    printf("The sum of the digits is: %d\n", sum);

    
}

