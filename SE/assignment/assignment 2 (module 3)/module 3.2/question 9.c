//Write a program to find out the max from given number 
#include <stdio.h>
main() 

{
    int n, max= 0, remainder;

    
    printf("Enter a numbers : ");
    scanf("%d", &n);
    if (n < 0) 
	{
        n = -n;         // if number is in negitive than convert it
    }
    while(n!=0) 
	{
        remainder = n%10;   //find a last digit

        if (remainder > max) 
		{ 
            max = remainder;
        }

        n /= 10;     
    }
    printf("The maximum digit is: %d\n", max);        // print maximum number
}

