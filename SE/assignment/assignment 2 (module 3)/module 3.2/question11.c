//Write a program you have to make a summation of first and last Digit. 
#include <stdio.h>
main() 
{
    int n, firstDigit, lastDigit, sum;


    printf("Enter a numbers: ");
    scanf("%d", &n);

    
    if (n < 0) 
	{
        n = -n;  // if number is in negitive than convert it
    }

    
    lastDigit = n % 10;       // find a last digit

    
    firstDigit = n;
    while (firstDigit >= 10)    //find a first digit
	{
        firstDigit /= 10;
    }
    sum = firstDigit + lastDigit;  // addition of first and last digit
    
    
    printf("The sum of the first and last digit is: %d\n", sum);
}

