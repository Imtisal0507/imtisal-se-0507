//Write a program make a summation of given number 
#include <stdio.h>
main() 
{
    int n, sum = 0, remainder;

    
    printf("Enter a numbers: ");
    scanf("%d", &n);

    
    if (n < 0) 
	{
        n = -n;  // if number is in negitive than convert it
    }


    while (n != 0) 
	{
        remainder = n%10; 
        sum+= remainder;       // summition of all numbers
        n/= 10;     
    }

    printf("The sum of the digits is: %d\n", sum);

    
}

